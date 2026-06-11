package Test2_Xint;

public class test {

    public static final int REPS = 100000000;
    public static final int N = 100;

    public static void test(int[] array) {
        for (int i = N - 1; i >= 0; i--) {
            array[i] = i;
        }
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int reps = 0; reps < REPS; reps++) {
            test(array);
        }
    }
}
