package Test1_Xint;

public class test {

    public static final int REPS = 100000000;

    static class MyException extends Exception {
        public MyException() {
            super();
        }
    }

    public static int test() {
        int num = 100;
        int result = 0;
        for (int i = 0; i < 1; i++) {
            try {
                if (num == 100) {
                    throw new MyException();
                }
            } catch (MyException e) {
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
