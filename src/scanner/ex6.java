package scanner;

import java.util.Scanner;

public class ex6 {
    static void main() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("첫 번째 숫자를 입력하세요:");
        int num1 = scanner.nextInt();
        System.out.println("두 번째 숫자를 입력하세요:");
        int num2 = scanner.nextInt();
        if (num1 > num2) {
            int num3;
            num3 = num1;
            num1 = num2;
            num2 = num3;
        }
        for (int num4 = num1; num4 <= num2; num4++) {
            System.out.print(num4);
            if (num4 != num2){
                System.out.print(",");
            }

        }
    }
}
