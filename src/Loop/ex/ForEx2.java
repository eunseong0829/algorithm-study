package Loop.ex;

public class ForEx2 {
    static void main() {
        for (int j = 1; j <= 20; j++) {
            if (j % 2 != 0) {
                continue;
            }
            System.out.println(j);
        }
    }
}
