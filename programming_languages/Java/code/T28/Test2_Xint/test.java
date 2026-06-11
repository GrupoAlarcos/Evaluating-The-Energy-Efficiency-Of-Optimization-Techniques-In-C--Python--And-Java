package Test2_Xint;

public class test {

    public static final int REPS = 100000000;
    public static final int N = 50;

    public static int test(int[] array, int ierror) {
        for (int i = 0; i < N; i++) {
            array[i] += 1;
        }
        for (int j = 0; j < N; j++) {
            if (array[j] >= 1) {
                ierror = 1;
            }
        }
        return ierror;
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = i % 2;
        }
        int ierror = 0;
        for (int rep = 0; rep < REPS; rep++) {
            test(array, ierror);
        }
    }
}
