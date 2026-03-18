package Loop;

public class Continue1 {
    static void main() {
        int i = 1;
        while (i <= 5) {
            if (i == 3) {
                i++;
                continue;  //i가 3일때 continue로 while로 넘어감
            }
            System.out.println(i);
            i++;
        }

    }
}
