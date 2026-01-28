public class test {

    static final int REPS = 100000000;

    public static int divide(int i, int j) {
        return i >> j;
    }

    public static void test(int i, int j) {
        divide(i, j);
    }

    public static void main(String[] args) {
        int dividend = 100_000_000;
        int exponent = 10;
        for (int reps = 0; reps < REPS; reps++) {
            test(dividend, exponent);
        }
    }
}
