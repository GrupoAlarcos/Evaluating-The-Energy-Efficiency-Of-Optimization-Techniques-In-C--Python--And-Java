public class test {

    static final int REPS = 100000000;

    public static void test(boolean a, boolean b) {
        boolean c = b || a;
        boolean d = a && b;
    }

    public static void main(String[] args) {
        boolean a = true;
        boolean b = false;
        for (int reps = 0; reps < REPS; reps++) {
            test(a, b);
        }
    }
}
