public class test {
    static final long REPS = 10000000000L;

    public static int dataToValue(String data) {
        if (data.equals("AAAAAA")) return 1;
        else if (data.equals("BBBBBB")) return 2;
        else if (data.equals("CCCCCC")) return 3;
        else if (data.equals("DDDDDD")) return 4;
        else if (data.equals("EEEEEE")) return 5;
        else if (data.equals("FFFFFF")) return 6;
        else if (data.equals("GGGGGG")) return 7;
        else if (data.equals("HHHHHH")) return 8;
        else if (data.equals("IIIIII")) return 9;
        else if (data.equals("JJJJJJ")) return 10;
        else if (data.equals("KKKKKK")) return 11;
        else if (data.equals("LLLLLL")) return 12;
        else if (data.equals("MMMMMM")) return 13;
        else if (data.equals("NNNNNN")) return 14;
        else if (data.equals("OOOOOO")) return 15;
        else if (data.equals("PPPPPP")) return 16;
        else if (data.equals("QQQQQQ")) return 17;
        else if (data.equals("RRRRRR")) return 18;
        else if (data.equals("SSSSSS")) return 19;
        else if (data.equals("TTTTTT")) return 20;
        else return -1;
    }

    public static void test() {
        dataToValue("TTTTTT");
    }

    public static void main(String[] args) {
        for (long reps = 0L; reps < REPS; reps++) {
            test();
        }
    }
}
