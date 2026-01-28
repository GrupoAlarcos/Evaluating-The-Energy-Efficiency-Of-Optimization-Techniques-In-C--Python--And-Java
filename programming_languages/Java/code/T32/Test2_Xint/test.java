public class test {

    static final int REPS = 100000000;

    public static int test(int b1, int b2, int b3, int[] lookup) {
        return lookup[b1 * 4 + b2 * 2 + b3];
    }

    public static void main(String[] args) {
        int f = 4, e = 3, d = 2, c = 1, b1 = 0, b2 = 0, b3 = 1;
        int[] lookup = {f, e, d, d, c, c, c, c};
        for (int reps = 0; reps < REPS; reps++) {
            test(b1, b2, b3, lookup);
        }
    }
}
