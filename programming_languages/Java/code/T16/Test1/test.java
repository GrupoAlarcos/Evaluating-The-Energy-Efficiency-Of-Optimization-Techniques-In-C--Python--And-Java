public class test {

    static final long REPS = 10000000000L;

    public static double divide(double i, double j) {
        return i / j;
    }

    public static void test(double i, double j) {
        divide(i, j);
    }

    public static void main(String[] args) {
        double dividend = 100_000_000;
        int exponent = 10;
        double divisor = Math.pow(2, exponent);
        for (long reps = 0L; reps < REPS; reps++) {
            test(dividend, divisor);
        }
    }
}
