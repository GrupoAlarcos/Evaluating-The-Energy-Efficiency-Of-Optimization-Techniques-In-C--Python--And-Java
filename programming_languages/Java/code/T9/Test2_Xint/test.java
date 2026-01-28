public class test {

    static final int REPS = 100000000;
    static int GLOBAL = 0;

    public static void test() {
        GLOBAL = 2;
        return;
    }

    public static void main(String[] args) {
        for (int reps = 0; reps < REPS; reps++) {
            test();
        }
    }
}
