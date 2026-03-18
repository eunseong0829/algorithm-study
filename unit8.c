//실수 자료형 사용하기
/*
float	4바이트,32비트	1.175494e-38~3.402823e+38	7	IEEE 754 단정밀도 부동소수점
double	8바이트,64비트	2.225074e-308~1.797693e+308	16	IEEE 754 배정밀도 부동소수점
long double	8바이트,64비트	2.225074e-308~1.797693e+308	16	IEEE 754 배정밀도 부동소수점
은 소수점을 표현할 수 있는 실수들 이다*/

//8.1 실수형 변수 선언하기
/*#include <stdio.h>
int main()
{
	float num1 = 0.1f;  //단정밀도 부정소수점 변수를 선언하고 값을 할당한 float는 숫자 뒤에 f를 붙임
	double num2 = 3867.215820; //단정밀도 부정소수점 변수를 선언하고 값을 할당한 double은 숫자 뒤에 아무것도 붙히지 않음
	long double num3 = 9.327513l; //단정밀도 부정소수점 변수를 선언하고 값을 활당한 long double은 숫자 뒤에 l을 붙임
	printf("%f %f %Lf\n", num1, num2, num3); //float와 double은 %f로 출력 long double은 %Lf로 출력한다
	return 0;
}  0.100000 3867.215820 9.327513*/
//지수 표가법으로 실수 지정
/*아주 큰 숫자나 아주 작은 숫자를 표기할 때는 지수 표기법(exponential notation)을 사용합니다. 
지수 표기법은 과학적 표기법(scientific notation)이라고도 부릅니다.
실수e+지수: 실수 * 10의 거듭제곱입니다. 2.1e+3이라면 2.1 * 1000 = 2100이 됩니다.
실수e-지수: 실수 * (1 / 10의 거듭제곱)입니다. 2.1e-2라면 2.1 * (1/100) = 0.021이 됩니다.*/
/*#include <stdio.h>

int main()
{
    float num1 = 3.e5f;             // 지수 표기법으로 300000을 표기
    // float는 숫자 뒤에 f를 붙임

    double num2 = -1.3827e-2;       // 지수 표기법으로 -0.013827을 표기
    // double은 숫자 뒤에 아무것도 붙이지 않음

    long double num3 = 5.21e+9l;    // 지수 표기법으로 5210000000을 표기
    // long double은 숫자 뒤에 l을 붙임

// float와 double은 %f로 출력, long double은 %Lf로 출력
    printf("%f %f %Lf\n", num1, num2, num3); // 300000.000000 -0.013827 5210000000.000000

    // 지수 표기법으로 출력할 때는 float와 double은 %e로 출력, long double은 %Le로 출력
    printf("%e %e %Le\n", num1, num2, num3); // 3.000000e+05 -1.382700e-02 5.210000e+09

    return 0;
}*/  /*300000.000000 -0.013827 5210000000.000000
     3.000000e+05 -1.382700e-02 5.210000e+09*/

//8.2 자료형 구하기
/*#include <stdio.h>

int main()
{
    float num1 = 0.0f;
    double num2 = 0.0;
    long double num3 = 0.0l;

    printf("float: %d, double: %d, long double: %d\n",
        sizeof(num1),     // 4: sizeof로 float 변수의 자료형 크기를 구함
        sizeof(num2),     // 8: sizeof로 double 변수의 자료형 크기를 구함
        sizeof(num3)      // 8: sizeof로 long double 변수의 자료형 크기를 구함
    );

    return 0;
} float: 4, double : 8, long double :8 */

//8.3 최솟값과 최댓값 표현하기
/*#include <stdio.h>
#include <float.h>    // 실수 자료형의 양수 최솟값, 최댓값이 정의된 헤더 파일

int main()
{
    float num1 = FLT_MIN;           // float의 양수 최솟값
    float num2 = FLT_MAX;           // float의 양수 최댓값
    double num3 = DBL_MIN;          // double의 양수 최솟값
    double num4 = DBL_MAX;          // double의 양수 최댓값
    long double num5 = LDBL_MIN;    // long double의 양수 최솟값
    long double num6 = LDBL_MAX;    // long double의 양수 최댓값

    printf("%.40f %.2f\n", num1, num2);    // 0.0000000000000000000000000000000000000118
    // 340282346638528859811704183484516925440.00

    printf("%e %e\n", num3, num4);         // 2.225074e-308 1.797693e+308
    printf("%Le %Le\n", num5, num6);       // 2.225074e-308 1.797693e+308

    return 0;
}*/ /*0.0000000000000000000000000000000000000118 
    340282346638528859811704183484516925440.00
    2.225074e-308 1.797693e+308
    2.225074e-308 1.797693e+308*/

//8.4 오버플로우와 언더플로우 알아보기
/*#include <stdio.h>
#include <float.h>    // 실수 자료형의 양수 최솟값, 최댓값이 정의된 헤더 파일

int main()
{
    float num1 = FLT_MIN;    // float의 양수 최솟값
    float num2 = FLT_MAX;    // float의 양수 최댓값

    // float의 양수 최솟값을 100000000.0으로 나누면 아주 작은 수가 되면서 언더플로우 발생
    num1 = num1 / 100000000.0f;

    // float의 양수 최댓값에 1000.0을 곱하면 저장할 수 있는 범위를 넘어서므로 오버플로우 발생
    num2 = num2 * 1000.0f;

    printf("%e %e\n", num1, num2);    // 0.000000e+00 inf: 실수의 언더플로우는 0
    // 오버플로우는 무한대가 됨

    return 0;
}*/  //0.000000e+00 inf