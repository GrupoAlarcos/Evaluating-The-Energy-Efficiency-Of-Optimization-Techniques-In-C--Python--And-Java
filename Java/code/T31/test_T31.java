import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class test_T31 {
 
    public static void main(String[] args) {
        test_files_identical();
        test_identical_output_check_all();
    }

    public static void test_files_identical() {
        String[][] filesToCompare = {
            {"Test1/test.java", "Test1_Xint/test.java"},
            {"Test2/test.java", "Test2_Xint/test.java"}
        };

        for (String[] pair : filesToCompare) {
            try {
                Path pathOrig = Paths.get(pair[0]);
                Path pathXint = Paths.get(pair[1]);

                if (!Files.exists(pathOrig) || !Files.exists(pathXint)) {
                    System.err.println("[ERROR] File not found: " + pair[0] + " or " + pair[1]);
                    System.exit(1);
                }

                java.util.List<String> f1Lines = Files.readAllLines(pathOrig);
                java.util.List<String> f2Lines = Files.readAllLines(pathXint);

                f1Lines.removeIf(line -> ignoreLine(line));
                f2Lines.removeIf(line -> ignoreLine(line));

                if (!f1Lines.equals(f2Lines)) {
                    System.err.println("[ERROR] Files differ (ignoring package & REPS): "
                            + pair[0] + " != " + pair[1]);
                    System.exit(1);
                }

            } catch (IOException e) {
                System.err.println("[ERROR] Error reading files: " + e.getMessage());
                System.exit(1);
            }
        }
    }

    private static boolean ignoreLine(String line) {
        String l = line.trim();

        return l.startsWith("package ")
            || l.startsWith("public static final int REPS")
            || l.startsWith("public static final long REPS")
            || l.contains("for (int reps")
            || l.contains("for (long reps");
    }

    public static void test_identical_output_check_all() {
        try {
            int n = Test1.test.N;
            int nbuf = Test2.test.NBUF;
            String[] array = new String[n];
            String[] buf = new String[nbuf];

            Arrays.fill(array, "a");
            Arrays.fill(buf, "a");

            List<String> generatedFiles = Arrays.asList(
                "test1.txt",
                "test2.txt"
            );

            try (BufferedWriter w1 = new BufferedWriter(new FileWriter("test1.txt"))) {
                Test1.test.test(array, w1);
            }

            try (BufferedWriter w2 = new BufferedWriter(new FileWriter("test2.txt"))) {
                Test2.test.test(array, buf, w2);
            }

            List<String> contents = new ArrayList<>();

            for (String filename : generatedFiles) {
                contents.add(Files.readString(Paths.get(filename)));
            }

            String first = contents.get(0);
            for (String c : contents) {
                if (!c.equals(first)) {
                    throw new AssertionError("Mismatch detected between versions!");
                }
            }

            for (String filename : generatedFiles) {
                Files.deleteIfExists(Paths.get(filename));
            }

        } catch (Throwable e) {
            System.err.println("[ERROR] Execution error: " + e.getMessage());
            System.exit(1);
        }
    }
}