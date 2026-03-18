// while 반복문으로 Hello, world! 100번 출력하기
/*초기식
while (조건식) // ← 루프 선언문(loop statement)
{
    반복할 코드
    변화식
}
// ↑ 루프 본체(loop body) 및 변화식*/

//28.1 while 반복문 사용하기
/*#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 100)    // i가 100보다 작을 때 반복. 0에서 99까지 증가하면서 100번 반복
    {
        printf("Hello, world!\n");
        i++;           // i를 1씩 증가시킴
    }

    return 0;
}*/

//28.2 초기값을 1부터 시작하기
/*#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 100)    // i가 100보다 작거나 같을 때 반복. 
    {                   // 1에서 100까지 증가하면서 100번 반복
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i++;                                // i를 1씩 증가시킴
    }

    return 0;
}*/

//28.4 while 반복문과 세미콜론
//for과 마찬가지로 while도 끝에 ;(세미콜론)을 붙이면 안됩(while에 ;을 붙이면 중괄호 안에 있는 변화식이 실행되지 않아 printf는 절대 실행되지 않음)

//28.5 입력한 횟수대로 반복하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    int i = 0;
    while (i < count)                      // i가 count보다 작을 때 반복
    {
        printf("Hello, world! %d\n", i);   // Hello, world!와 i의 값을 함께 출력
        i++;                               // i를 1씩 증가시킴
    }

    return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    while (count > 0)    // count가 0보다 클 때 반복
    {
        printf("Hello, world! %d\n", count);
        count--;         // count를 1씩 감소시킴
    }

    return 0;
}*/

//28.6 반복 횟수가 정해지지 않은 경우
/*#include <stdio.h>
#include <stdlib.h>    // srand, rand 함수가 선언된 헤더 파일
#include <time.h>      // time 함수가 선언된 헤더 파일

int main()
{
    srand(time(NULL));    // 현재 시간값으로 시드 설정

    int i = 0;
    while (i != 3)         // 3이 아닐 때 계속 반복
    {
        i = rand() % 10;   // rand 함수를 사용하여 무작위로 정수를 생성한 뒤 10 미만의 숫자로 만듦
        printf("%d\n", i);
    }

    return 0;
}*/
//먼저 무작위로 정수를 생성하려면 srand, rand, time 함수가 필요합니다(무작위로 정수를 생성하는 행동을 난수 생성 또는 랜덤이라고도 합니다)
/*
srand: 난수를 발생시킬 초깃값인 시드(seed)를 설정합니다. 보통 현재 시간값을 사용합니다.
rand: 난수를 발생시킵니다.
time: 정수 형태로 된 현재 시간값을 반환합니다.*/
//srand(time(NULL));    // 현재 시간값으로 시드 설정

//28.7 while 반복문으로 무한 루프 만들기
/*#include <stdio.h>

int main()
{
    while (1)    // while에 1을 지정하면 무한 루프
    {
        printf("Hello, world!\n");
    }

    return 0;
}*/

//while 반복문에서 중괄호 생략하기
//while도 반복할 코드가 한 줄이라면 중괄호을 생략할 수 있다
