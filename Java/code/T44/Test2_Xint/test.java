package Test2_Xint;

public class test {

    public static final int REPS = 100000000;

    public static boolean test(boolean a, boolean b) {
        boolean c = a || b;
        boolean d = b && a;
        return c;
    }

    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;
        for (int reps = 0; reps < REPS; reps++) {
            test(a, b);
        }
    }
}
