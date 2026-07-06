package Test2_Xint;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

public class test {

    public static final int REPS = 1000000;
    public static final int N = 50;
    public static final int NBUF = 5;

    public static void test(String[] array, String[] buf, BufferedWriter writer) throws IOException {
        int i = 0;
        int auxN = N + (N % NBUF);
        while (i < auxN) {
            for (int j = 0; j < NBUF; j++) {
                if ((i + j) < N) {
                    buf[j] = array[i + j];
                } else {
                    buf[j] = "\0";
                }
            }
            i += NBUF;
            StringBuilder sb = new StringBuilder();
            for (String s : buf) {
                sb.append(s);
            }
            writer.write(sb.toString());
        }
    }

    public static void main(String[] args) {
        String[] array = new String[N];
        String[] buf = new String[NBUF];
        for (int i = 0; i < N; i++) {
            array[i] = "a";
        }
        for (int i = 0; i < NBUF; i++) {
            buf[i] = "a";
        }
        File file = new File("test.txt");
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(file))) {
            for (int reps = 0; reps < REPS; reps++) {
                test(array, buf, writer);
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
