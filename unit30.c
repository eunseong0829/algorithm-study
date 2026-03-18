//break, continue로 반복문 제어하기

//30.1 break로 반복문 끝내기
/*#include <stdio.h>

int main()
{
    int num1 = 0;

    while (1)   // 무한 루프
    {
        num1++;  // num1을 1씩 증가시킴

        printf("%d\n", num1);

        if (num1 == 100)    // num1이 100일 때
            break;          // 반복문을 끝냄. while의 제어흐름을 벗어남
    }

    return 0;
}*/

//30.2 continue로 코드 실행 건너뛰기
/*#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)    // 1부터 100까지 증가하면서 100번 반복
    {
        if (i % 2 != 0)               // i를 2로 나누었을 때 나머지가 0이 아니면 홀수
            continue;                 // 아래 코드를 실행하지 않고 건너뜀

        printf("%d\n", i);
    }

    return 0;
}*/   //(생략 92 94 96 98 100)

//30.3 입력한 횟수대로 반복하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음
    
    int i = 1;
    while (1)               // 무한 루프
    {
        printf("%d\n", i);

        if (i == count)     // i가 입력받은 값과 같을 때
            break;          // 반복문을 끝냄

        i++;
    }

    return 0;
}*/  //5(입력) 1 2 3 4 5

//입력한 숫자까지 짝수 출력하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    for (int i = 1; i <= count; i++)    // 1부터 증가하면서 count보다 작거나 같을 때까지 반복
    {
        if (i % 2 != 0)                 // i를 2로 나누었을 때 나머지가 0이 아니면 홀수
            continue;                   // 아래 코드를 실행하지 않고 건너뜀

        printf("%d\n", i);
    }

    return 0;
}*/  //10(입력) 2 4 6 8 10