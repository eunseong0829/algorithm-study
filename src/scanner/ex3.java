package scanner;

import java.util.Scanner;

public class ex3 {
    static void main() {
        Scanner scanner = new Scanner(System.in);
        System.out.println("음식 이름을 입력해주세요: ");
        String foodname = scanner.nextLine();
        System.out.println("음식의 가격을 입력해주세요: ");
        int foodPrice = scanner.nextInt();
        System.out.println("음식의 수량을 입력해주세요: ");
        int foodQuantity = scanner.nextInt();
        System.out.println(foodname + " "+ foodQuantity + "개를 주문하셨습니다. 총 가격은 " + foodPrice * foodQuantity + "원입니다.");
    }
}
