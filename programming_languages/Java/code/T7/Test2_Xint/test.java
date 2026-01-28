public class test {
    static final int REPS = 100000000;

    public static void test(double x) {
        double aux = x + Math.sqrt(16384);
        double i = aux + 1;
        double j = aux;
    }

    public static void main(String[] args) {
        double x = 100;
        for (int reps = 0; reps < REPS; reps++) {
            test(x);
        }
    }
}
