import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class test {

    static final int REPS = 1000000;
    static final int N = 50;

    public static void test(String[] array, BufferedWriter writer) throws IOException {
        for (int i = 0; i < N; i++) {
            writer.write(array[i]);
        }
    }

    public static void main(String[] args) {
        String[] array = new String[N];
        for (int i = 0; i < N; i++) {
            array[i] = "a";
        }
        File file = new File("test.txt");
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(file))) {
            for (int reps = 0; reps < REPS; reps++) {
                test(array, writer);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        if (file.exists()) {
            file.delete();
        }
    }
}
