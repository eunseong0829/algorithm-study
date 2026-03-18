//for 반복문으로 Hello,world! 100번 출력하기
/*C 언어의 for 반복문은 다음과 같이 괄호 안에 초기식, 조건식, 변화식을 지정하며 이 부분을 루프 선언문(loop statement)이라고 부릅니다. 
그리고 중괄호 안에 반복할 코드를 작성하는데 이 부분을 루프 본체(loop body)라고 부릅니다*/
/*for (초기식; 조건식; 변화식) // ← 루프 선언문(loop statement)
{
    반복할 코드
}
// ↑ 루프 본체(loop body)*/

//27.1 for 반복문 사용하기
/*#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++)    // 0부터 99까지 증가하면서 100번 반복
    {
        printf("Hello, world!\n");
    }

    return 0;
}*/
/*초기식: 반복문을 시작할 때 초기식입니다. 보통 정수형 변수를 선언한 뒤 0을 할당합니다 
(이 변수를 루프 인덱스라고도 부르며 index의 첫 머리글자를 따서 i를 주로 사용합니다) 반복에 사용할 변수는 초기식 부분에서 선언해도 되고, 
for 반복문 바깥에서 선언해도 됩니다.
조건식: 반복될 조건입니다. 조건식이 참이면 계속 반복하며, 거짓이 되면 반복문을 끝냅니다.
변화식: 반복문이 한 번 실행될 때마다 수행할 식입니다. 보통 증가 연산자 ++를 사용하여 변수의 값을 1씩 증가시킵니다.*/

//초기값의 변화 알아보기
/*#include <stdio.h>

int main()
{
    int i;
    for (i = 0; i < 10; i++)    // 0부터 9까지 증가하면서 10번 반복
    {
        printf("Hello, world!\n");
    }

    printf("%d\n", i);    // 반복문이 끝난 뒤 i의 값 출력

    return 0;
}*/

//27.3 초기값을 1부터 시작하기
/*#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)        // 1부터 100까지 증가하면서 100번 반복
    {
        printf("Hello, world! %d\n", i);  // Hello, world!와 i의 값을 함께 출력
    }

    return 0;
}*/

//27.4 초기값을 감소시키기
/*#include <stdio.h>

int main()
{
    for (int i = 100; i > 0; i--)         // 100부터 1까지 감소하면서 100번 반복
    {
        printf("Hello, world! %d\n", i);  // Hello, world!와 i의 값을 함께 출력
    }

    return 0;
}*/

//for 반복문과 세미콜론
//for 반복문은 if 조건문과 마찬가지로 끝에 ;(세미콜론)을 붙이면 안 됩니다
/*#include <stdio.h>

int main()
{
    for (int i = 0; i < 100; i++);    // for 루프 선언문 끝에 세미콜론을 붙이면 안됨
    {
        printf("Hello, world!\n");
    }

    return 0;
}*/
//뒤에 세미콜론이 붙어 반복되지 않고 한번만 출력된다

//27.6 for 반복문에서 중괄호 생략하기
//for 반복문도 반복할 코드가 한줄이라면 중괄호가 생략될 수 있다(두 줄 이상일 때는 중괄호 생략에 주의해야 한다)
//두 줄이상일때 중괄호가 생략되면 첫 번째 printf만 반복되고 두 번째는 한번만 출력된다

//27.7 입력한 횟수대로 반복하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    for (int i = 0; i < count; i++)    // 0부터 입력받은 값보다 작을 때까지 반복
    {
        printf("Hello, world! %d\n", i);
    }

    return 0;
}*/
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int count;

    scanf("%d", &count);    // 값을 입력받음

    for (int i = count; i > 0; i--)    // 입력받은 값을 감소시키면서 반복
    {
        printf("Hello, world! %d\n", i);
    }

    return 0;
}*/

//27.8 for 반복문에서 변수 두 개 사용하기
/*#include <stdio.h>

int main()
{
    for (int i = 0, j = 0; i < 10; i++, j += 2)    // i는 1씩 증가, j는 2씩 증가
    {
        printf("i: %d, j: %d\n", i, j);
    }

    return 0;
}*/

//27.9 for 반복문으로 무한 루프 만들기
/*#include <stdio.h>

int main()
{
    for (;;)    // 초깃값, 조건식, 변화식을 모두 생략하면 무한 루프
    {
        printf("Hello, world!\n");
    }

    return 0;
}*/
//이 코드는 무한 루프라서 프로그램이 종료되지 않습니다. 반드시 콘솔(터미널, 명령 프롬프트)에서 Ctrl+C를 입력하여 프로그램을 중단시키세요