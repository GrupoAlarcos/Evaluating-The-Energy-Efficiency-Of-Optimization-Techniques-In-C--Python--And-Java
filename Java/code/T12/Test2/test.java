package Test2;

public class test {

    public static final long REPS = 10000000000L;

    public static int sub(int x, int y) {
        return x + -y;
    }

    public static int test(int x, int y) {
        return sub(x, y);
    }

    public static void main(String[] args) {
        int minuend = 10;
        int subtrahend = 5;
        for (long reps = 0L; reps < REPS; reps++) {
            test(minuend, subtrahend);
        }
    }
}
