//else if를 사용하여 여러 방향으로 분기하기
//19.1 else if 사용하기
/*#include <stdio.h>

int main()
{
    int num1 = 20;

    if (num1 == 10)
        printf("10입니다.\n");
    else if (num1 == 20)    // else인 상태에서 조건식 지정
        printf("20입니다.\n");

    return 0;
}*/
//else if에 조건식을 지정하지 않으면 에러가 발생한다

//19.2 if,else if, else를 모두 사용하기
/*#include <stdio.h>

int main()
{
    int num1 = 30;

    if (num1 == 10)        // num1이 10일 때
        printf("10입니다.\n");
    else if (num1 == 20)   // num1이 20일 때
        printf("20입니다.\n");
    else                   // 앞의 조건식에 모두 만족하지 않을 때
        printf("10도 20도 아닙니다.\n");

    return 0;
}*/
//if와 else는 한 번만 사용할 수 있지만, else if는 여러번 사용할 수 있다
//else if앞에 else가 오면 에러가 발생한다
