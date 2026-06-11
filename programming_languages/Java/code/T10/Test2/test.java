package Test2;

public class test {

    public static final long REPS = 10000000000L;

    public static int test() {
        int num = 100;
        int result = 0;
        for (int i = 0; i < 1; i++) {
            if (num == 100) {
                result = 1;
            }
        }
        return result;
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test();
        }
    }
}
