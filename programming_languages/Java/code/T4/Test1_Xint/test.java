public class test {

    static final int REPS = 100000000;
    static final int N = 20;

    static class Class {
        private int data = 0;

        public void setData(int data) {
            this.data = data;
        }

        public int getData() {
            return this.data;
        }
    }

    public static void test(Class c, int[] array) {
        for (int i = 0; i < N; i++) {
            if (c.getData() == 1) {
                array[i] = 0;
            }
        }
    }

    public static void main(String[] args) {
        int[] array = new int[N];
        Class c = new Class();
        c.setData(1);
        for (int reps = 0; reps < REPS; reps++) {
            test(c, array);
        }
    }
}
