public class test {

    static final long REPS = 10000000000L;

    public static long multiply(long i, int j) {
        return i << j;
    }

    public static void test(long i, int j) {
        multiply(i, j);
    }

    public static void main(String[] args) {
        long factor1 = 100000000L;
        int factor2 = 10;
        for (long reps = 0L; reps < REPS; reps++) {
            test(factor1, factor2);
        }
    }
}
