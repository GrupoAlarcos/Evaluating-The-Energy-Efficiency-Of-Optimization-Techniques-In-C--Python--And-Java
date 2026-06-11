package Test1;

public class test {

    public static final long REPS = 10000000000L;
    public static final int N = 10;
    static long SUM = 0;

    public static long test(int[] array) {
        SUM = 0;
        for (int i = 0; i < N; i++) {
            SUM += array[i];
        }
        return SUM;
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = i;
        }
        for (long reps = 0L; reps < REPS; reps++) {
            test(array);
        }
    }
}
