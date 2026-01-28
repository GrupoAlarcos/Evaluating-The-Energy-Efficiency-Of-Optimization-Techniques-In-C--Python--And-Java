public class test {
    static final long REPS = 10000000000L;

    public static void test(double x) {
        double i = x + Math.sqrt(16384) + 1;
        double j = x + Math.sqrt(16384);
    }

    public static void main(String[] args) {
        double x = 100;
        for (long reps = 0L; reps < REPS; reps++) {
            test(x);
        }
    }
}
