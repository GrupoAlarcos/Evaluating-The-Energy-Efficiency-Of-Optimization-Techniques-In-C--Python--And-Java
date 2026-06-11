import java.util.Arrays;
import java.util.Random;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.io.IOException;

public class test_T51 {

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
            Random random = new Random();

            int n = Test1.test.N;

            int[] masterArray = new int[n];
            for (int i = 0; i < n; i++) {
                masterArray[i] = random.nextInt(n);
            }

            int[] copy1 = Arrays.copyOf(masterArray, n);
            int[] copy2 = Arrays.copyOf(masterArray, n);

            Test1.test.test(copy1);
            Test2.test.test(copy2);

            if (!Arrays.equals(copy1, copy2)) {
                System.err.println("[ERROR] Mismatch detected between versions!");
                System.exit(1);
            }

            int[] sortedMaster = Arrays.copyOf(masterArray, n);
            Arrays.sort(sortedMaster);

            if (!Arrays.equals(copy1, sortedMaster)) {
                System.err.println("[ERROR] The arrays are identical but they are NOT sorted!");
                System.exit(1);
            }

        } catch (Throwable e) {
            System.err.println("[ERROR] Execution error: " + e.getMessage());
            System.exit(1);
        }
    }
}