package scanner;

import java.util.Scanner;

public class Scanner1 {
    static void main() {
        Scanner scanner = new Scanner(System.in); // 스케너 기능을 사용하기 위서 new Scanner을 만듬
        System.out.println("문자열을 입력하세요: ");
        String str = scanner.nextLine(); //엔터를 입력할 때 까지 문자를 가져온다
        System.out.println("입력한 문자열: " + str);

        System.out.println("정수를 입력하세여: ");
        int intValue = scanner.nextInt(); //입력을 int형으로 가져온다
        System.out.println("입력한 정수: " + intValue);

        System.out.println("실수를 입력하세여: ");
        double doubleValue = scanner.nextDouble(); //입력을 double형으로 가져온다
        System.out.println("입력한 실수: " + doubleValue);
    }
}
