package Test1;

public class test {

    public static final long REPS = 10000000000L;
    public static final int N = 50;
    static int VALUE = 0;

    public static int f() {
        return 512;
    }

    public static int test() {
        for (int i = 0; i < N; i++) {
            VALUE += f();
        }
        return VALUE;
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test();
        }
    }
}
