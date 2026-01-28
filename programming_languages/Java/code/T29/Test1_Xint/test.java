public class test {

    static final int REPS = 100000000;

    public static boolean test(int i, int maxN, int minN) {
        return (i <= maxN) && (i >= minN);
    }

    public static void main(String[] args) {
        for (int reps = 0; reps < REPS; reps++) {
            test(2, 5, 1);
        }
    }
}