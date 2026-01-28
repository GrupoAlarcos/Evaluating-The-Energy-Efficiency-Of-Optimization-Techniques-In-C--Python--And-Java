public class test {

    static final long REPS = 10000000000L;
    static final int N = 50;

    public static void power(int[] array) {
        for (int i = 0; i < N; i++) {
            array[i] = array[i] * array[i];
        }
    }

    public static void test(int[] array) {
        power(array);
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = 1;
        }
        for (long reps = 0L; reps < REPS; reps++) {
            test(array);
        }
    }
}
