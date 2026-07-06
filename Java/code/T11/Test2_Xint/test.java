package Test2_Xint;

public class test {

    public static final int REPS = 100000000;
    public static final int N = 10;
    static long SUM = 0;

    public static long test(int[] array) {
        long t = 0;
        for (int i = 0; i < N; i++) {
            t += array[i];
        }
        SUM = t;
        return SUM;
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = i;
        }
        for (int reps = 0; reps < REPS; reps++) {
            test(array);
        }
    }
}
