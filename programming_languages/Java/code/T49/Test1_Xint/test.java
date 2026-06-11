package Test1_Xint;

public class test {

    public static final int REPS = 100000000;
    public static final int N = 50;

    public static int test(int[] array, int val) {
        for (int i = 0; i < N; i++) {
            if (array[i] == val) {
                return i;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = (i == 25) ? 10 : 0;
        }
        for (int reps = 0; reps < REPS; reps++) {
            test(array, 10);
        }
    }
}
