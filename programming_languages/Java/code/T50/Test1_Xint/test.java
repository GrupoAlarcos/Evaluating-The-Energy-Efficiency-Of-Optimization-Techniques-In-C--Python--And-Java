public class test {

    static final int REPS = 10000000;
    static final int N = 50;

    public static void test() {
        int[][] A = new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (i < j) {
                    A[i][j] = 3;
                }
            }
        }
    }

    public static void main(String[] args) {
        for (int reps = 0; reps < REPS; reps++) {
            test();
        }
    }
}
