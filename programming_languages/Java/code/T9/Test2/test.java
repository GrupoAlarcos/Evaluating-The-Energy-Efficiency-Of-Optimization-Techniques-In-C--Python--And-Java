public class test {

    static final long REPS = 10000000000L;
    static int GLOBAL = 0;

    public static void test() {
        GLOBAL = 2;
        return;
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test();
        }
    }
}
