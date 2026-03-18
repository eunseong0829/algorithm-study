package casting;

public class Casting1 {
    static void main() {
        int intValue = 10;
        long longValue;  //long -> int
        double doubleValue; //double -> long
        longValue = intValue; // int -> long
        System.out.println("longValue = " + longValue);
        doubleValue = intValue; // int -> double
        System.out.println("doubleValue = " + doubleValue);

        doubleValue = 20L; // long -> double
        System.out.println("doubleValue2 = " + doubleValue);
    }
}

