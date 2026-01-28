public class test {

    static final long REPS = 10000000000L;

    public static int test(int b1, int b2, int b3, int c, int d, int e, int f) {
        if (b1 != 0) return c;
        else if (b2 != 0) return d;
        else if (b3 != 0) return e;
        else return f;
    }

    public static void main(String[] args) {
        int f = 4, e = 3, d = 2, c = 1, b1 = 0, b2 = 0, b3 = 1;
        for (long reps = 0L; reps < REPS; reps++) {
            test(b1, b2, b3, c, d, e, f);
        }
    }
}
