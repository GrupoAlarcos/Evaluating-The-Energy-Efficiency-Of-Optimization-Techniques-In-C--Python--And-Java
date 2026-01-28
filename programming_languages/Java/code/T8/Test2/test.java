import java.util.HashMap;
import java.util.Map;

public class test {
    static final long REPS = 10000000000L;
    static final Map<String, Integer> mapData = new HashMap<>();

    static {
        mapData.put("AAAAAA", 1);
        mapData.put("BBBBBB", 2);
        mapData.put("CCCCCC", 3);
        mapData.put("DDDDDD", 4);
        mapData.put("EEEEEE", 5);
        mapData.put("FFFFFF", 6);
        mapData.put("GGGGGG", 7);
        mapData.put("HHHHHH", 8);
        mapData.put("IIIIII", 9);
        mapData.put("JJJJJJ", 10);
        mapData.put("KKKKKK", 11);
        mapData.put("LLLLLL", 12);
        mapData.put("MMMMMM", 13);
        mapData.put("NNNNNN", 14);
        mapData.put("OOOOOO", 15);
        mapData.put("PPPPPP", 16);
        mapData.put("QQQQQQ", 17);
        mapData.put("RRRRRR", 18);
        mapData.put("SSSSSS", 19);
        mapData.put("TTTTTT", 20);
    }

    public static int dataToValue(String data) {
        return mapData.getOrDefault(data, -1);
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
