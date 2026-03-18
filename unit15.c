//나머지 연산하기
//15.1 나머지 연산하기
//나머지 연산은 % 연산자를 사용하며 정수 a에서 b를 나눈 뒤 나머지를 구합니다. 만약 완전히 나누어진다면 나머지는 0입니다
/*#include <stdio.h>

int main()
{
    printf("%d\n", 1 % 3);    // 1: 1을 3으로 나누면 몫은 0 나머지는 1
    printf("%d\n", 2 % 3);    // 2: 2를 3으로 나누면 몫은 0 나머지는 2
    printf("%d\n", 3 % 3);    // 0: 3을 3으로 나누면 몫은 1 나머지는 0
    printf("%d\n", 4 % 3);    // 1: 4를 3으로 나누면 몫은 1 나머지는 1
    printf("%d\n", 5 % 3);    // 2: 5를 3으로 나누면 몫은 1 나머지는 2
    printf("%d\n", 6 % 3);    // 0: 6을 3으로 나누면 몫은 2 나머지는 0

    return 0;
}*/
//나머지 연산은 정수에서만 사용 가능하고 실수에서 사용하면 에러가 발생하고 또한 0으로 나눈 결과의 나머지는 구할 수 없다

/*참고 | 실수의 나머지 구하기
실수끼리 나누었을 때 나머지는 math.h 헤더 파일의 fmod, fmodf, fmodl 함수로 구할 수 있습니다. 여기서 fmod 함수는 double형 실수, 
fmodf는 float형 실수, fmodl은 long double형 실수일 때 사용합니다.

fmod(나누어지는수, 나누는수);
double fmod(double _X, double _Y);
fmodf(나누어지는수, 나누는수);
float fmodf(float _X, float _Y);
fmodl(나누어지는수, 나누는수);
long double fmodl(long double _X, long double _Y);
fmod.c
#include <stdio.h>
#include <math.h>    // fmod 함수가 선언된 헤더 파일

int main()
{
    // 실수의 나머지 연산은 fmod, fmodf, fmodl 함수를 사용

    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1, num2));    // 3.263000

    float num3 = 10.843f;
    float num4 = 3.79f;
    printf("%f\n", fmodf(num3, num4));    // 3.263000

    long double num5 = 10.843l;
    long double num6 = 3.79l;
    printf("%Lf\n", fmodl(num5, num6));    // 3.263000

    return 0;
}*/

//15.2 변수 하나에서 나머지 연산하기
/*#include <stdio.h>
 
int main()
{
    int num1 = 7;
 
    num1 = num1 % 2;    // num1에서 2를 나눈 뒤 나머지를 구하여 다시 num1에 저장
 
    printf("%d\n", num1);    // 1
 
    return 0;
}*/
//나머지 연산도 변수를 두 번 입력하지 않도록 나머지를 구한 후 할당 %= 연산자를 제공합니다.
/*#include <stdio.h>
 
int main()
{
    int num1 = 7;
 
    num1 %= 2;    // num1에 2를 나눈 뒤 나머지를 구하여 다시 num1에 저장
 
    printf("%d\n", num1);    // 1
 
    return 0;
}*/
