public class test {

    static final long REPS = 10000000000L;

    public static int divide(int i, int j) {
        return i >> j;
    }

    public static void test(int i, int j) {
        divide(i, j);
    }

    public static void main(String[] args) {
        int dividend = 100_000_000;
        int exponent = 10;
        for (long reps = 0L; reps < REPS; reps++) {
            test(dividend, exponent);
        }
    }
}
