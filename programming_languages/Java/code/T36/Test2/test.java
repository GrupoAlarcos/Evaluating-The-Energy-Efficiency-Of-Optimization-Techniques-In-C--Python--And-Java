public class test {

    static final long REPS = 10000000000L;
    static final int N = 50;

    public static void test(int[] array, int val) {
        int i = 0;
        while (i < N) {
            if (array[i] >= val) {
                break;
            }
            i++;
        }
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = (i == N / 2) ? 25 : 0;
        }
        for (long reps = 0L; reps < REPS; reps++) {
            test(array, 25);
        }
    }
}
