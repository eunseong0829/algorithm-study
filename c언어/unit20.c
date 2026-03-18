//비교 연산자와 삼항 연산자 사용하기
//비교 연산자
/*
연산자	설명
==	같음
!=	같지 않음(다름)
>	큼
<	작음
>=	크거나 같음
<=	작거나 같음
*/
//삼항 연산자
/*
연산자	설명
  ? :	조건부 연산자. 조건식이 참이면 : 앞의 값을 반환, 거짓이면 : 뒤의 값을 반환
*/
//20.1 비교 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    printf("%d\n", num1 == 10);    // 1: num1이 10과 같은지
    printf("%d\n", num1 != 5);     // 1: num1이 5와 다른지
 
    printf("%d\n", num1 > 10);     // 0: num1이 10보다 큰지
    printf("%d\n", num1 < 10);     // 0: num1이 10보다 작은지
 
    printf("%d\n", num1 >= 10);    // 1: num1이 10보다 크거나 같은지
    printf("%d\n", num1 <= 10);    // 1: num1이 10보다 작거나 같은지
 
    return 0;
}*/
//C언어에서는 비교 연산자가 참이면 1 거짓이면 0이 나온다

//10.2 삼항 연산자 사용하기
/*#include <stdio.h> 

int main()
{
    int num1 = 5;
    int num2;
 
    num2 = num1 ? 100 : 200;    // num1이 참이면 num2에 100을 할당, 거짓이면 num2에 200을 할당
 
    printf("%d\n", num2);    // 100: num1이 5이므로 참. num2에는 100이 할당됨
 
    return 0;
}*/
/*#include <stdio.h>
 
int main()
{
    int num1 = 10;
    int num2;
 
    num2 = num1 == 10 ? 100 : 200; // num1이 10이면 num2에 100을 할당, 10이 아니면 num2에 200을 할당
 
    printf("%d\n", num2);    // 100: num1이 10이므로 num2에는 100이 할당됨
 
    return 0;
}*/

//20.3 if 조건문과 비교 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    if (num1 == 10)    // num1이 10과 같은지 검사
        printf("10입니다.\n");
 
    if (num1 != 5)     // num1이 5와 다른지 검사
        printf("5가 아닙니다.\n");
 
    if (num1 > 10)     // num1이 10보다 큰지 검사
        printf("10보다 큽니다.\n");
 
    if (num1 < 10)     // num1이 10보다 작은지 검사
        printf("10보다 작습니다.\n");
 
    if (num1 >= 10)    // num1이 10보다 크거나 같은지 검사
        printf("10보다 크거나 같습니다.\n");
 
    if (num1 <= 10)    // num1이 10보다 작거나 같은지 검사
        printf("10보다 작거나 같습니다.\n");
 
    return 0;
}*/

//20.4 함수 안에서 삼향 연산자 사용하기
/*#include <stdio.h>

int main()
{
    int num1 = 5;

    // 함수 안에서 삼항 연산자 사용
    printf("%s\n", num1 == 10 ? "10입니다." : "10이 아닙니다."); // num1은 5이므로 "10이 아닙니다."
                                                                // 출력

    return 0;
}*/
