public class test {

    static final int REPS = 100000000;
    static final int N = 60;

    public static void test(int[][] array) {
        for (int j = 0; j < N; j++) {
            for (int i = 0; i < N; i++) {
                array[i][j] = 0;
            }
        }
    }

    public static void main(String[] args) {
        int[][] array = new int[N][N];
        for (int reps = 0; reps < REPS; reps++) {
            test(array);
        }
    }
}
