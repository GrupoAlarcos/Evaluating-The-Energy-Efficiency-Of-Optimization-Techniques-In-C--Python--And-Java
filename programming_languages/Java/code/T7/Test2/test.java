public class test {
    static final long REPS = 10000000000L;

    public static void test(double x) {
        double aux = x + Math.sqrt(16384);
        double i = aux + 1;
        double j = aux;
    }

    public static void main(String[] args) {
        double x = 100;
        for (long reps = 0L; reps < REPS; reps++) {
            test(x);
        }
    }
}
