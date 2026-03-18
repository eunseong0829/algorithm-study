package Loop;

public class Break2 {
    static void main() {
        int sum = 0;
        int i = 1;
        for (; ; ) {  // 무한 반복
            sum += i;
            if (sum > 10) {
                System.out.println("합이 10보다 크면 종료: i=" + i + " sum=" + sum);
                break;
            }
            i++;
        }
    }
}
