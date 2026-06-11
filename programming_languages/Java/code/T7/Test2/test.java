package Test2;

public class test {
    public static final long REPS = 10000000000L;

    public static double test(double x) {
        double aux = x + Math.sqrt(16384);
        double i = aux + 1;
        double j = aux;
        return i;
    }

    public static void main(String[] args) {
        double x = 100;
        for (long reps = 0L; reps < REPS; reps++) {
            test(x);
        }
    }
}
