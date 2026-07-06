import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;

public class test_T26 {

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

            int[] array1 = new int[n];
            int[] array2 = new int[n];

            int[] copy11 = Arrays.copyOf(array1, n);
            int[] copy12 = Arrays.copyOf(array2, n);
            int[] copy21 = Arrays.copyOf(array1, n);
            int[] copy22 = Arrays.copyOf(array2, n);

            Test1.test.test(copy11, copy12, n);
            Test2.test.test(copy21, copy22, n);

            if (!Arrays.equals(copy11, copy21)) {
                throw new AssertionError("Mismatch detected between versions!");
            }

            if (!Arrays.equals(copy12, copy22)) {
                throw new AssertionError("Mismatch detected between versions!");
            }

        } catch (Throwable e) {
            System.err.println("[ERROR] Execution error: " + e.getMessage());
            e.printStackTrace();
            System.exit(1);
        }
    }
}