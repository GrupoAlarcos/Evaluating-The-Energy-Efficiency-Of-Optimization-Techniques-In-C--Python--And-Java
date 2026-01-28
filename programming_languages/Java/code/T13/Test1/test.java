public class test {

    static final long REPS = 10000000000L;
    static final int N = 50;
    static int VALUE = 0;

    public static int f() {
        return 512;
    }

    public static void test() {
        for (int i = 0; i < N; i++) {
            VALUE += f();
        }
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test();
        }
    }
}
