package Test2_Xint;

public class test {

    public static final int REPS = 100000000;
    static int GLOBAL = 0;

    public static int test() {
        GLOBAL = 2;
        return GLOBAL;
    }

    public static void main(String[] args) {
        for (int reps = 0; reps < REPS; reps++) {
            test();
        }
    }
}
