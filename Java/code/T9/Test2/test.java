package Test2;

public class test {

    public static final long REPS = 10000000000L;
    static int GLOBAL = 0;

    public static int test() {
        GLOBAL = 2;
        return GLOBAL;
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test();
        }
    }
}
