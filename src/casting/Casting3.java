package casting;

public class Casting3 {
    static void main() {
       long maxIntValue = 2147483647; //int 최고 값
       long maxIntOver = 2147483678L; //int 최고 값 1초과
       int intValue = 0;
       intValue = (int) maxIntValue;
       System.out.println("maxIntValue casting= " + intValue);
       intValue = (int) maxIntOver; //오버플로우가 발생하여  시계 돌듯이 int의 가장 작수 수 부터 시작 된다
       System.out.println("maxintOver casting= " + intValue);
    }
}

