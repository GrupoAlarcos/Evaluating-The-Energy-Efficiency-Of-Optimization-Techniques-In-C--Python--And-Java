public class test {

    static final long REPS = 10000000000L;

    public static long multiply(long i, long j) {
        return i * j;
    }

    public static void test(long i, long j) {
        multiply(i, j);
    }

    public static void main(String[] args) {
        long factor1 = 100000000L;
        long factor2 = 10L;
        for (long reps = 0L; reps < REPS; reps++) {
            test(factor1, factor2);
        }
    }
}
