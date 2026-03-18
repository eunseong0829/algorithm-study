//곱셈, 나눗셈하기
//14.1 곱셈, 나눗셈 하기
/*#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 2 * 3;    // 2에 3를 곱해서 num1에 저장
    num2 = 7 / 2;    // 7에서 2를 나누어서 num2에 저장

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3: 소수점을 사용하지 않고 최대한 나눌 수 있는 값이 3

    return 0;
}*/
//* 정수를 0으로 나누면 에러가 발생한다
//실수
/*#include <stdio.h>

int main()
{
    float num1;
    float num2;

    num1 = 2.73f * 3.81f;    // 2.73에 3.81f을 곱해서 num1에 저장
    num2 = 7.0f / 2.0f;      // 7.0에서 2.0을 나누어서 num2에 저장

    printf("%f\n", num1);    // 10.401299
    printf("%f\n", num2);    // 3.500000

    return 0;
}*/
//실수도 소스 코드에서 0으로 직접 나누면 컴파일 에러가 발생한다 하지만 변수에 실수와 0.0을 저장하면 무한대(inf)가 나온다
/*#include <stdio.h>

int main()
{
    float num1 = 1.0f;
    float num2 = 0.0f;
    float num3;

    num3 = num1 / num2;

    printf("%f\n", num3);    // inf: 무한대

    return 0;
}*/

//14.2 변수 하나에서 값을 곱하거나 나누기
/*#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 7;

    num1 = num1 * 3;    // num1에 3을 곱한 뒤 다시 num1에 저장
    num2 = num2 / 2;    // num2에서 2를 나눈 뒤 다시 num2에 저장

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3

    return 0;
}*/
/*곱셈과 나눗셈도 변수를 두 번 입력하지 않도록 곱셈 후 할당 *=, 나눗셈 후 할당 /= 연산자를 제공합니다.

변수 *= 값
변수 /= 값   */
/*#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 7;

    num1 *= 3;    // num1에 3을 곱한 뒤 다시 num1에 저장
    num2 /= 2;    // num2에서 2를 나눈 뒤 다시 num2에 저장

    printf("%d\n", num1);    // 6
    printf("%d\n", num2);    // 3

    return 0;
}*/