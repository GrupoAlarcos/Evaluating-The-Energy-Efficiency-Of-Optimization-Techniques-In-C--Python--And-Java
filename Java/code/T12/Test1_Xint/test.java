package Test1_Xint;

public class test {

    public static final int REPS = 100000000;

    public static int add(int x, int y) {
        return x + y;
    }

    public static int sub(int x, int y) {
        return add(x, -y);
    }

    public static int test(int x, int y) {
        return sub(x, y);
    }

    public static void main(String[] args) {
        int minuend = 10;
        int subtrahend = 5;
        for (int reps = 0; reps < REPS; reps++) {
            test(minuend, subtrahend);
        }
    }
}
