public class test {

    static final long REPS = 10000000000L;

    public static boolean test(int i, int maxN, int minN) {
        return (i - minN) <= (maxN - minN);
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test(2, 5, 1);
        }
    }
}