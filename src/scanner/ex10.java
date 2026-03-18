package scanner;

import java.util.Scanner;

public class ex10 {
    static void main() {
        Scanner scanner = new Scanner(System.in);
        int totalCost = 0;
        while (true) {
            System.out.println("1: 상품 입력, 2: 결제, 3: 프로그램 종료");
            int option = scanner.nextInt();
            if (option == 1) {
                System.out.println("상품명을 입력하세요: ");
                String name = scanner.nextLine();
                System.out.println("상품의 가격을 입력하세요: ");
                int money = scanner.nextInt();
                System.out.println("구매 수량을 입력하세요: ");
                int num = scanner.nextInt();
                totalCost = money * num;
                System.out.println("상품명:" + name + " 가격:" + money + " 수량:" + num + " 합계:" + money * num);
            } else if (option == 2) {
                System.out.println("총 비용: " + totalCost);
                totalCost = 0;
            } else if (option == 3) {
                System.out.println("프로그램을 종료합니다");
                break;
            } else
                System.out.println("올바른 옵션을 선택해 주세요");
        }
    }
}
