//자료형의 확장과 축소 알아보기
//16.1 자료형의 확장 알라보기
/*#include <stdio.h>
 
int main()
{
    int num1 = 11;
    float num2 = 4.4f;
 
    printf("%f\n", num1 + num2);    // 15.400000: 정수와 실수 덧셈. 정수는 실수로 변환됨
    printf("%f\n", num1 - num2);    // 6.600000: 정수와 실수 뺄셈. 정수는 실수로 변환됨
    printf("%f\n", num1 * num2);    // 48.400002: 정수와 실수 곱셈. 정수는 실수로 변환됨
    printf("%f\n", num1 / num2);    // 2.500000: 정수와 실수 나눗셈. 정수는 실수로 변환됨
 
    return 0;
}*/
//정수와 실수를 합께 연산하면 실수가 값의 범위가 넓기 때문에 값이 실수로 나온다
/*C 언어에서는 자료형을 섞어서 쓰면 컴파일러에서 암시적 형 변환(implicit type conversion)을 하게 되는데 자료형의 크기가 큰 쪽, 
표현 범위가 넓은 쪽으로 자동 변환됩니다. 이를 형 확장(type promotion)이라고 하며 값이 버려지지 않고 그대로 보전됩니다*/
/*#include <stdio.h>
 
int main()
{
    long long num1 = 123456789000;
    int num2 = 10;
 
    // int보다 long long이 자료형 크기가 크므로 long long으로 변환됨
    printf("%lld\n", num1 + num2);    // 123456789010
    printf("%lld\n", num1 - num2);    // 123456788990
    printf("%lld\n", num1 * num2);    // 1234567890000
    printf("%lld\n", num1 / num2);    // 12345678900
 
    return 0;
}*/

//16.2 자료형의 축소 알아보기
/*#include <stdio.h>
 
int main()
{
    float num1 = 11.0f;
    float num2 = 5.0f;
 
    int num3 = num1 / num2;    // 실수에서 실수를 나누어 2.2가 나왔지만 
                               // 정수 자료형에는 2만 저장되고 0.2는 버려짐
 
    printf("%d\n", num3);    // 2
 
    return 0;
}*/
/*1.0에서 5.0을 나누면 2.2가 되어야 하지만 정수 자료형에서는 소수점 이하 자리를 표현할 수 없으므로 2만 저장됩니다 
따라서 0.2가 버려지게 되므로 주의합니다 이렇게 자료형의 크기가 작은 쪽, 표현 범위가 좁은 쪽으로 변환 되는 것을 형 축소(type demotion)라고 합니다*/
/*#include <stdio.h>
 
int main()
{
    char num1 = 28;
    int num2 = 1000000002;
 
    char num3 = num1 + num2;    // char보다 큰 숫자는 저장할 수 없음
                                // 28 + 2만 남고 앞 자릿수는 버려짐
 
    printf("%d\n", num3);    // 30
  
    return 0;
}*/
/*문자 자료형 char도 정수 자료형이므로 int와 함께 연산해도 문제가 없습니다. 하지만 char와 int와 함께 연산한 뒤 char에 저장하면 
char보다 큰 숫자는 저장할 수 없습니다. 여기서는 28 + 1000000002에서 28 + 2만 남게 되고 앞 자릿수는 버려집니다*/