package scope;

public class Scope3_1 {
    static void main() {
       int m = 10;
       int temp = 0; //if문에서만 필요한데 메인으로 선언하여 메모리가 낭비 되고 코드 복잡성이 증가한다
       if (m > 0) {
           temp = m * 2;
           System.out.println("temp = " + temp);
       }
        System.out.println("m = " + m);
    }
}
