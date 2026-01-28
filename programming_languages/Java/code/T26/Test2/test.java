public class test {

    static final long REPS = 10000000000L;
    static final int N = 100;

    public static void test(int[] a, int[] b, int x) {
        if (x == 1) {
            for (int i = 0; i < N; i++) {
                a[i] = 0;
            }
        } else {
            for (int i = 0; i < N; i++) {
                b[i] = 0;
            }
        }
    }

    public static void main(String[] args) {
        int[] a = new int[N];
        int[] b = new int[N];
        for (long reps = 0L; reps < REPS; reps++) {
            test(a, b, N);
        }
    }
}
