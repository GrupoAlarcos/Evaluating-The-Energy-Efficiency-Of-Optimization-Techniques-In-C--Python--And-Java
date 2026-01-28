public class test {

    static final int REPS = 100000000;

    public static long multiply(long i, long j) {
        return i * j;
    }

    public static void test(long i, long j) {
        multiply(i, j);
    }

    public static void main(String[] args) {
        long factor1 = 100000000L;
        long factor2 = 10L;
        for (int reps = 0; reps < REPS; reps++) {
            test(factor1, factor2);
        }
    }
}
