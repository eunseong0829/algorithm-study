//if 조건문으로 특정 조건일 때 코드 실행하기
//17,1 if 조건문 사용하기
/*#include <stdio.h>
 
int main()
{
    int num1 = 10;
 
    if (num1 == 10)    // num1이 10이면
    {
        printf("10입니다.\n");    // "10입니다."를 출력
    }
 
    return 0;
}*/
/*C 언어에서 조건문은 if ( ) 형식으로 사용하며 ( ) (괄호)안에는 조건식이 들어갑니다
그리고 { } (중괄호) 안에는 조건식이 만족할 때 실행할 코드를 넣습니다*/
//단, C 언어에서는 =을 할당으로 사용하고 있으므로 값을 비교할 때는 =를 두 개 붙여서 ==로 사용합니다

//17.2 if 조건문과 세미콜론
/*#include <stdio.h>
 
int main()
{
    int num1 = 5;
 
    if (num1 == 10);    // if 조건문 끝에는 세미콜론을 붙이면 안 됨
    {
        printf("10입니다.\n");
    }
 
    return 0;
}*/      //if 뒤에 세미콜론이 붙어 if가 동작하지 않아 num1가 5이지만 10입니다가 출력된다
//세미콜론을 쓰면 if와 printf가 전혀 관계가 없이 떨어진 상태가 되기 때문

//17.3 if 조건문에서 중괄호 생략하기
/*#include <stdio.h>

int main()
{
    int num1 = 10;

    if (num1 == 10)
        printf("10입니다.\n");    // 실행할 코드가 한 줄이라면 중괄호 생략

    return 0;
}*/
//if에서 실행할 코드가 두 줄 이상인데 중괄호을 생략하면 첫 번째 줄만 실행된다
/*#include <stdio.h>
 
int main()
{
    int num1 = 5;
 
    if (num1 == 10)
        printf("if 조건문\n");    // if에서 중괄호를 생략하면 첫 번째 줄만 실행됨
        printf("10입니다.\n");    // 중괄호가 없으므로 if의 결과와는 관계 없이 항상 실행됨
 
    return 0;   
}*/          //10입니다

//17.4 if 조건문에서 실수와 문자 비교하기
/*#include <stdio.h>
 
int main()
{
    float num1 = 0.1f;
    char c1 = 'a';
 
    if (num1 == 0.1f)  // 실수 비교
        printf("0.1입니다.\n");
 
    if (c1 == 'a')     // 문자 비교
        printf("a입니다.\n");
 
    if (c1 == 97)      // 문자를 ASCII 코드로 비교
        printf("a입니다.\n");
 
    return 0;
}*/          //0.1입니다. a입니다. a입니다,

//17.5 사용자가 입력한 값에 if 조건문 사용하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
 
int main()
{
    int num1;

    scanf("%d", &num1);    // 입력받은 값을 변수에 저장
 
    if (num1 == 10)             // num1이 10이면
    {
        printf("10입니다.\n");  // "10입니다."를 출력
    }
 
    if (num1 == 20)             // num1이 20이면
    {
        printf("20입니다.\n");  // "20입니다."를 출력
    }
 
    return 0;
}*/