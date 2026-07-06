package Test2;

public class test {

    public static final long REPS = 10000000000L;

    public static long multiply(int i, int j) {
        return (long) i << j;
    }

    public static long test(int i, int j) {
        return multiply(i, j);
    }

    public static void main(String[] args) {
        int factor1 = 100000000;
        int factor2 = 10;
        for (long reps = 0L; reps < REPS; reps++) {
            test(factor1, factor2);
        }
    }
}
