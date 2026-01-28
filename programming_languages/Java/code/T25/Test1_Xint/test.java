public class test {

    static final int REPS = 100000000;
    static final int N = 100;

    public static int search(int[] list, int want) {
        for (int i = 0; i < N; i++) {
            if (list[i] == want) {
                return i;
            }
        }
        return -1;
    }

    public static int test(int[] list) {
        return search(list, 98);
    }

    public static void main(String[] args) {
        int[] list = new int[N];
        for (int i = 0; i < N; i++) {
            list[i] = i;
        }
        for (int reps = 0; reps < REPS; reps++) {
            test(list);
        }
    }
}
