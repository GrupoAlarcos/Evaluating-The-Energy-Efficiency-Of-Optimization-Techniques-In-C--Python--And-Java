package Test1_Xint;

public class test {

    public static final int REPS = 100000000;

    public static boolean test(boolean a, boolean b) {
        boolean c = b || a;
        boolean d = a && b;
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
