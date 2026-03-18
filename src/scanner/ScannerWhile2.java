package scanner;

import java.util.Scanner;

public class ScannerWhile2 {
    static void main() {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            System.out.println("첫 번째 숫자를 입력하세요");
            int num1 = scanner.nextInt();
            System.out.println("두 번째 숫자를 입력하세요");
            int num2 = scanner.nextInt();
            System.out.println(num1 + num2);
            if (num1 == 0 && num2 == 0) {
                System.out.println("프로그램을 종료합니다");
                break;
            }
        }
    }
}
