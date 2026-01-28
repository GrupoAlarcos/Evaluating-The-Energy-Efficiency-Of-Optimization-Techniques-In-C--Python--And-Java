public class test {

    static final long REPS = 10000000000L;
    static final int N = 50;

    public static int test(int[] array, int val) {
        int pos = -1;
        for (int i = 0; i < N; i++) {
            if (array[i] == val) {
                pos = i;
            }
        }
        return pos;
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = (i == 25) ? 10 : 0;
        }
        for (long reps = 0L; reps < REPS; reps++) {
            test(array, 10);
        }
    }
}
