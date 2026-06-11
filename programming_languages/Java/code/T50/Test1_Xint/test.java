package Test1_Xint;

public class test {

    public static final int REPS = 10000000;
    public static final int N = 50;

    public static int[][] test() {
        int[][] A = new int[N][N];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (j < i) {
                    A[i][j] = 3;
                }
            }
        }
        return A;
    }

    public static void main(String[] args) {
        for (int reps = 0; reps < REPS; reps++) {
            test();
        }
    }
}
