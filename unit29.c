//do while 반복문으로 최소 한 번은 실행하기
//do while 반복문은 초기식이 반복문 바깥에 있습니다. 그리고 do로 시작하여 중괄호 안에 반복할 코드와 변화식이 함께 들어가며 
// 중괄호가 끝나는 부분에 조건식을 지정해줍니다
/*초기식
do // ↓ 루프 본체(loop body) 및 변화식
{
    반복할 코드
    변화식
} while (조건식);
//   ↑ 루프 선언문(loop statement)*/

//do while 반복문 사용하기
/*#include <stdio.h>

int main()
{
    int i = 0;

    do     // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i++;                                // i를 1씩 증가시킴
    } while (i < 100);    // i가 100보다 작을 때 반복. 0부터 99까지 증가하면서 100번 반복

    return 0;
}*/
/*do 다음에 오는 코드는 조건식과 상관없이 무조건 한 번은 실행됩니다. 따라서 printf가 한 번 실행되고, 
i++도 실행되어 i가 1 증가합니다. 이 상태로 조건식에서 i가 100보다 작은지 검사하게 됩니다. 
아직은 i가 100보다 작으므로 계속 반복하다가 i가 100이 되면 i < 100은 거짓이 되므로 반복을 끝냅니다*/
/*do while 반복문도 반드시 { } (중괄호) 안에 변화식을 지정해야 합니다. 만약 조건식만 지정하고 중괄호 안에서 변화식을 생략하면 
반복이 끝나지 않고 계속 실행(무한 루프)되므로 주의해야 합니다*/

//29.2 초기값을 1부터 시작하기
/*#include <stdio.h>

int main()
{
    int i = 1;

    do    // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i++;                                // i를 1씩 증가시킴
    } while (i <= 100);    // i가 100보다 작거나 같을 때 반복. 1부터 100까지 증가하면서 100번 반복

    return 0;
}*/

//29.3 초기값 감소시키기
/*#include <stdio.h>

int main()
{
    int i = 100;

    do    // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i--;                                // i를 1씩 감소시킴
    } while (i > 0);    // i가 0보다 클 때 반복. 100부터 1까지 감소하면서 100번 반복

    return 0;
}*/

//29.4 입력한 횟수대로 반복하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    int i = 0;
    do // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello, world! %d\n", i);    // Hello, world!와 i의 값을 함께 출력
        i++;                                // i를 1씩 증가시킴
    } while (i < count);                    // i가 count보다 작을 때 반복

    return 0;
}*/

//29.5 반복 횟수가 정해지지 않은 경우
/*#include <stdio.h>
#include <stdlib.h>    // srand, rand 함수가 선언된 헤더 파일
#include <time.h>      // time 함수가 선언된 헤더 파일

int main()
{
    srand(time(NULL));    // 현재 시간값으로 시드 설정

    int i = 0;
    do
    {
        i = rand() % 10;    // rand 함수를 사용하여 무작위로 정수를 생성한 뒤 10 미만의 숫자로 만듦
        printf("%d\n", i);
    } while (i != 3);      // 3이 아닐 때 계속 반복

    return 0;
}*/

//29.6 do while 반복문으로 무한 루프 만들기
/*#include <stdio.h>

int main()
{
    do
    {
        printf("Hello, world!\n");
    } while (1);    // while에 1을 지정하면 무한 루프

    return 0;
}*/

//29.7 코드 한 번만 실행하기
/*#include <stdio.h>

int main()
{
    do
    {
        printf("Hello, world!\n");
    } while (0);    // while에 0을 지정하면 코드가 한 번만 실행됨

    return 0;
}*/