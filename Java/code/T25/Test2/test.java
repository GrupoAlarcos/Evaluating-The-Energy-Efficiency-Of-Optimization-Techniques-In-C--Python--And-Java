package Test2;

public class test {

    public static final int REPS = 100000000;
    public static final int N = 100;

    public static int search(int[] list, int want) {
        if (N == 0) return -1;
        int last = list[N - 1];
        list[N - 1] = want;   
        int i = 0;
        while (list[i] != want) {
            i++;
        }   
        list[N - 1] = last;     
        if (i < (N - 1) || last == want) {
            return i;
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
