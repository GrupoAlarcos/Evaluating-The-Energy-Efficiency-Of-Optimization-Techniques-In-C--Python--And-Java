public class test {

    static final long REPS = 10000000000L;

    public static int functb(int x) {
        return x * 2;
    }

    public static int funct(int x) {
        return functb(x - 1) - 8;
    }

    public static void test(int a) {
        int b = funct(a);
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test(1);
        }
    }
}
