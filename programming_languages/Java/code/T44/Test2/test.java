public class test {

    static final long REPS = 10000000000L;

    public static void test(boolean a, boolean b) {
        boolean c = a || b;
        boolean d = b && a;
    }

    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;
        for (long reps = 0L; reps < REPS; reps++) {
            test(a, b);
        }
    }
}
