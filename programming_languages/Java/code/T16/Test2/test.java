package Test2;

public class test {

    public static final long REPS = 10000000000L;

    public static long divide(long i, int j) {
        return i >> j;
    }

    public static long test(long i, int j) {
        return divide(i, j);
    }

    public static void main(String[] args) {
        long dividend = 100000000;
        int exponent = 10;
        for (long reps = 0L; reps < REPS; reps++) {
            test(dividend, exponent);
        }
    }
}
