package Test2;

public class test {

    public static final long REPS = 10000000000L;
    public static final int N = 50;

    public static int test(int[] array, int val) {
        int i = 0;
        while (i < N) {
            if (array[i] >= val) {
                break;
            }
            i++;
        }
        return i;
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            if (i == N / 2) {
                array[i] = 25;
            } else {
                array[i] = 0;
            }
        }
        for (long reps = 0L; reps < REPS; reps++) {
            test(array, 25);
        }
    }
}
