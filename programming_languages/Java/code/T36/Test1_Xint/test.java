public class test {

    static final int REPS = 100000000;
    static final int N = 50;

    public static void test(int[] array, int val) {
        boolean flag = true;
        int i = 0;
        while (i < N && flag) {
            if (array[i] >= val) {
                flag = false;
            }
            i++;
        }
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            if (i == N / 2) {
                array[i] = 25;
            } else {
                array[i] = 0;
            }
        }
        for (int reps = 0; reps < REPS; reps++) {
            test(array, 25);
        }
    }
}
