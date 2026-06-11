package Test1;

public class test {

    public static final long REPS = 10000000000L;

    public static boolean test(boolean a, boolean b) {
        boolean c = b || a;
        boolean d = a && b;
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
