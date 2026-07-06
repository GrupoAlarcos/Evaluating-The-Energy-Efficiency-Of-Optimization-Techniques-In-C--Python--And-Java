import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;

public class test_T19 {
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
            int[] array = new int[n];
            int[] copy1 = Arrays.copyOf(array, n);
            int[] copy2 = Arrays.copyOf(array, n);

            Test1.test.test(copy1);
            Test2.test.test(copy2);

            if (!Arrays.equals(copy1, copy2)) {
                throw new AssertionError("Mismatch detected between versions!");
            }
        } catch (Throwable e) {
            System.err.println("[ERROR] Execution error: " + e.getMessage());
            e.printStackTrace();
            System.exit(1);
        }
    }
}