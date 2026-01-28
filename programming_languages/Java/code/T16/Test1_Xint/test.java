public class test {

    static final int REPS = 100000000;

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
        for (int reps = 0; reps < REPS; reps++) {
            test(dividend, divisor);
        }
    }
}
