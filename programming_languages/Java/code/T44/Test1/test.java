public class test {

    static final long REPS = 10000000000L;

    public static void test(boolean a, boolean b) {
        boolean c = b || a;
        boolean d = a && b;
    }

    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;
        for (long reps = 0L; reps < REPS; reps++) {
            test(a, b);
        }
    }
}
