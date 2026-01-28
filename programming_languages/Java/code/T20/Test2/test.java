public class test {

    static final long REPS = 10000000000L;
    static final int N = 50;

    public static void test(int[] array) {
        for (int i = 0; i < N; i += 5) {
            array[i] = 0;
            array[i + 1] = 0;
            array[i + 2] = 0;
            array[i + 3] = 0;
            array[i + 4] = 0;
        }
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (long reps = 0L; reps < REPS; reps++) {
            test(array);
        }
    }
}
