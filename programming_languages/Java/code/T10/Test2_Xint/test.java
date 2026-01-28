public class test {

    static final int REPS = 100000000;

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
        for (int reps = 0; reps < REPS; reps++) {
            test();
        }
    }
}
