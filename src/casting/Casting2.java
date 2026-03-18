package casting;

public class Casting2 {
    static void main() {
        double doubleValue = 1.5;
        int intVlaue = 0;
        //intVlaue = doubleValue; //오류발생 소수점이 날라가기 때문
        intVlaue = (int) doubleValue; //명시적 형변환
        System.out.println(intVlaue);
        System.out.println((int) 10.5);
    }
}

