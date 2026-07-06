import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;
import java.util.Arrays;
import java.util.Random;

public class test_T49 {

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

            int random_index = random.nextInt(n);
            int random_value = random.nextInt(n);

            int[] array = new int[n];

            for (int i = 0; i < n; i++) {
                if (i == random_index) {
                    array[i] = random_value;
                } else {
                    array[i] = 0;
                }
            }

            int r1 = Test1.test.test(array, random_index);
            int r2 = Test2.test.test(array, random_index);

            if (r1 == r2) {
                System.exit(0);
            } else {
                System.err.println("[ERROR] Mismatch detected between versions!");
                System.exit(1);
            }
        } catch (Throwable e) {
            System.err.println("[ERROR] Execution error: " + e.getMessage());
            System.exit(1);
        }
    }
}