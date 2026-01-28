public class test {

    static final int REPS = 100000000;
    static final int N = 50;

    public static void test() {
        int[][] A = new int[N][N];
        for (int i = 1; i < N; i++) {
            int j = 0;
            while (j < i) {
                A[i][j] = 3;
                j++;
            }
        }
    }

    public static void main(String[] args) {
        for (int reps = 0; reps < REPS; reps++) {
            test();
        }
    }
}
