import java.util.*;

class Scaler {
    static int i;

    static {
        System.out.println("a");

        i = 100;
    }
}

public class CodingTwo {
    static {
        System.out.println("b");
    }

    public static void main(String[] args) {
        System.out.println("c");

        System.out.println(Scaler.i);
    }
}

// Output
// b
// c
// a
// 100
