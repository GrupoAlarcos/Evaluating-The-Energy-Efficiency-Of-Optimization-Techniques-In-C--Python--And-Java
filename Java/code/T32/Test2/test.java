package Test2;

import java.util.Random;

public class test {

    public static final long REPS = 10000000000L;
    public static final int N_SAMPLES = 1000;

    public static int test(int b1, int b2, int b3, int c, int d, int e, int f, int[] lookup) {
        return lookup[b1 * 4 + b2 * 2 + b3];
    }

    public static void main(String[] args) {
        int f = 4, e = 3, d = 2, c = 1;
        int[] lookup = {f, e, d, d, c, c, c, c};
        Random random  = new Random();
        int[][] samples = new int[N_SAMPLES][3];
        for (int i = 0; i < N_SAMPLES; i++) {
            samples[i][0] = random.nextInt(2);
            samples[i][1] = random.nextInt(2);
            samples[i][2] = random.nextInt(2);
        }
        for (int i = 0; i < REPS / N_SAMPLES; i++) {
            for (int j = 0; j < N_SAMPLES; j++) {
                int b1 = samples[j][0];
                int b2 = samples[j][1];
                int b3 = samples[j][2];
                test(b1, b2, b3, c, d, e, f, lookup);
            }
        }
    }
}
