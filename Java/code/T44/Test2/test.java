package Test2;

public class test {

    public static final long REPS = 10000000000L;

    public static boolean test(boolean a, boolean b) {
        boolean c = a || b;
        boolean d = b && a;
        return c;
    }

    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;
        for (long reps = 0L; reps < REPS; reps++) {
            test(a, b);
        }
    }
}
