import java.util.Random;

public class test {

    static final int REPS = 100000000;
    static final int N = 50;
    static final int THRESHOLD = 10;

    public static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    public static int partition(int[] arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr, i, j);
            }
        }
        swap(arr, i + 1, high);
        return i + 1;
    }

    public static void insertionSort(int[] arr, int low, int high) {
        for (int i = low + 1; i <= high; i++) {
            int key = arr[i];
            int j = i - 1;
            while (j >= low && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    public static void quicksort(int[] arr, int low, int high) {
        if (low < high) {
            if (high - low + 1 <= THRESHOLD) {
                insertionSort(arr, low, high);
            } else {
                int pivotIndex = partition(arr, low, high);
                quicksort(arr, low, pivotIndex - 1);
                quicksort(arr, pivotIndex + 1, high);
            }
        }
    }

    public static void test(int[] array) {
        quicksort(array, 0, N - 1);
    }

    public static void main(String[] args) {
        Random rand = new Random();
        int[] array = new int[N];
        for (int i = 0; i < N; i++) {
            array[i] = rand.nextInt(N);
        }
        for (int reps = 0; reps < REPS; reps++) {
            test(array);
        }
    }
}
