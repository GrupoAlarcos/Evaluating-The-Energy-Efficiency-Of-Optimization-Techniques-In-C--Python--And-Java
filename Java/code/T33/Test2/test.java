package Test2;

public class test {

    public static final long REPS = 10000000000L;

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
        for (long reps = 0L; reps < REPS; reps++) {
            test(1);
        }
    }
}
