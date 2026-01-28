public class test {

    static final int REPS = 10000000;
    static final int N = 50;

    public static void power(int[] array) {
        for (int i = 0; i < N; i++) {
            array[i] = array[i] * array[i];
        }
    }

    public static void test(int[] array) {
        power(array);
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = 1;
        }
        for (int reps = 0; reps < REPS; reps++) {
            test(array);
        }
    }
}
