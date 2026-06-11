package Test2;

public class test {

    public static final int REPS = 100000000;
    public static final int N = 50;

    public static int[][] test() {
        int[][] A = new int[N][N];
        for (int i = 1; i < N; i++) {
            int j = 0;
            while (j < i) {
                A[i][j] = 3;
                j++;
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
