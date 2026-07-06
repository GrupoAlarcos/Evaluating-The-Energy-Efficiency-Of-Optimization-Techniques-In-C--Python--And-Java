package Test1_Xint;

public class test {

    public static final int REPS = 10000000;
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
        for (int reps = 0; reps < REPS; reps++) {
            test();
        }
    }
}
