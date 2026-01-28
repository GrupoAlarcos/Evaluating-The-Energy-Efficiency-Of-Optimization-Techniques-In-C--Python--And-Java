public class test {

    static final long REPS = 10000000000L;
    static final int N = 10;
    static long SUM = 0;

    public static void test(int[] array) {
        for (int i = 0; i < N; i++) {
            SUM += array[i];
        }
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = i;
        }
        for (long reps = 0L; reps < REPS; reps++) {
            test(array);
        }
    }
}
