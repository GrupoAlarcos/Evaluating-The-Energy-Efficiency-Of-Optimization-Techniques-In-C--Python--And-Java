public class test {

    static final long REPS = 10000000000L;

    public static int test() {
        int num = 100;
        for (int i = 0; i < 1; i++) {
            if (num != 100) {
                continue;
            }
        }
        return 0;
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test();
        }
    }
}
