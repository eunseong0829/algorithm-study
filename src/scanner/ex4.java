package scanner;

import java.util.Scanner;

public class ex4 {
    static void main() {
        Scanner scanner = new Scanner(System.in);
        int num3;
        System.out.println("구구단의 단 수를 입력해주세요: ");
        int num2 = scanner.nextInt();
        System.out.println(num2 + "단의 구구단:");
        for (int num1 = 1; num1 <= 9; num1++) {
            num3 = num2 * num1;
            System.out.println(num2 + " x " + num1 + " = " + num3);
        }
    }
}
