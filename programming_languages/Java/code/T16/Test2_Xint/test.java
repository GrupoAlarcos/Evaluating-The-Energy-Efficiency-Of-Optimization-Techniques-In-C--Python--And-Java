package Test2_Xint;

public class test {

    public static final int REPS = 100000000;

    public static long divide(long i, int j) {
        return i >> j;
    }

    public static long test(long i, int j) {
        return divide(i, j);
    }

    public static void main(String[] args) {
        long dividend = 100000000;
        int exponent = 10;
        for (int reps = 0; reps < REPS; reps++) {
            test(dividend, exponent);
        }
    }
}
