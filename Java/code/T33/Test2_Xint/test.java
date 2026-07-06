package Test2_Xint;

public class test {

    public static final int REPS = 100000000;

    public static int functb(int x) {
        return x * 2;
    }

    public static int funct(int x) {
        return functb(x - 1) - 8;
    }

    public static int test(int a) {
        int b = funct(a);
        return b;
    }

    public static void main(String[] args) {
        for (int reps = 0; reps < REPS; reps++) {
            test(1);
        }
    }
}
