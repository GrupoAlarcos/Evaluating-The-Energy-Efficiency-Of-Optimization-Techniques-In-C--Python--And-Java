package Test1_Xint;

public class test {
    public static final int REPS = 100000000;

    public static double test(double x) {
        double i = x + Math.sqrt(16384) + 1;
        double j = x + Math.sqrt(16384);
        return i;
    }

    public static void main(String[] args) {
        double x = 100;
        for (int reps = 0; reps < REPS; reps++) {
            test(x);
        }
    }
}
