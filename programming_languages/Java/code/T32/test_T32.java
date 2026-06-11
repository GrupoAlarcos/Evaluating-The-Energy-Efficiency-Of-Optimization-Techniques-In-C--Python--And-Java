import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Path;
import java.nio.file.Paths;

public class test_T32 {

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
            int f = 4, e = 3, d = 2, c = 1;
            int[] lookup = new int[]{f, e, d, d, c, c, c, c};

            int[] values = {0, 1};

            for (int b1 : values) {
                for (int b2 : values) {
                    for (int b3 : values) {

                        int r1 = Test1.test.test(b1, b2, b3, c, d, e, f, null);
                        int r2 = Test2.test.test(b1, b2, b3, c, d, e, f, lookup);

                        if (!(r1 == r2)) {
                            System.err.println("[ERROR] Mismatch detected between versions!");
                            System.exit(1);
                        }
                    }
                }
            }

            System.exit(0);

        } catch (Throwable e) {
            System.err.println("[ERROR] Execution error: " + e.getMessage());
            System.exit(1);
        }
    }
}