package scanner;

import java.util.Scanner;

public class ex9 {
    static void main() {
        Scanner scanner = new Scanner(System.in);
        int num1 = 0;
        int num2 = 0;
        int count = 0;
        while (true){
            System.out.println("숫자를 입력하세요. 입력을 중단할려면 -1을 입력하세요:");
            num1 = scanner.nextInt();
            if (num1 == -1){
                break;
            }
            num2 += num1;
            count++;
        }
        double av = (double) num2 / count;
        System.out.println("입력한 숫자들의 합계: " + num2);
        System.out.println("입력한 숫자들의 평균: " + av);

    }
}
