package Test1_Xint;

public class test {

    public static final int REPS = 100000000;

    public static long multiply(int i, int j) {
        return (long) i * j;
    }

    public static long test(int i, int j) {
        return multiply(i, j);
    }

    public static void main(String[] args) {
        int factor1 = 100000000;
        int factor2 = 1024;
        for (int reps = 0; reps < REPS; reps++) {
            test(factor1, factor2);
        }
    }
}
