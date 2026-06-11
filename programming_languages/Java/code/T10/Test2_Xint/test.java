package Test2_Xint;

public class test {

    public static final int REPS = 100000000;

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
        for (int reps = 0; reps < REPS; reps++) {
            test();
        }
    }
}
