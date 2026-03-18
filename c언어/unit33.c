//FizzBuzz
/*FizzBuzz는 매우 간단한 프로그래밍 문제이며 규칙은 다음과 같습니다.

1에서 100까지 출력
3의 배수는 Fizz 출력
5의 배수는 Buzz 출력
3과 5의 공배수는 FizzBuzz 출력
즉, 1부터 100까지 숫자를 출력하면서 3의 배수는 숫자 대신 "Fizz", 5의 배수는 숫자 대신 "Buzz", 3과 5의 공배수는 숫자 대신 
"FizzBuzz"를 출력하면 됩니다.*/

//33.2 3의 배수일 때와 5의 배수일 때 처리하기
/*#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)    // 1부터 100까지 100번 반복
    {
        if (i % 3 == 0)               // 3의 배수일 때
            printf("Fizz\n");         // Fizz 출력
        else if (i % 5 == 0)          // 5의 배수일 때
            printf("Buzz\n");         // Buzz 출력
        else  
            printf("%d\n", i);        // 아무것도 해당되지 않을 때 숫자 출력
    }

    return 0;
}*/

//33.3 3과 5의 공배수 처리하기
/*#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)      // 1부터 100까지 100번 반복
    {
        if (i % 3 == 0 && i % 5 == 0)   // 3과 5의 공배수일 때
            printf("FizzBuzz\n");       // FizzBuzz 출력
        else if (i % 3 == 0)            // 3의 배수일 때
            printf("Fizz\n");           // Fizz 출력
        else if (i % 5 == 0)            // 5의 배수일 때
            printf("Buzz\n");           // Buzz 출력
        else
            printf("%d\n", i);          // 아무것도 해당되지 않을 때 숫자 출력
    }

    return 0;
}*/
//공배수를 먼저 검사하게 해야한다

//33.4 논리 연산자를 사용하지 않고 3과 5의 공배수 처리하기
/*#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)   // 1부터 100까지 100번 반복
    {
        if (i % 15 == 0)             // 15의 배수(3과 5의 공배수)일 때
            printf("FizzBuzz\n");    // FizzBuzz 출력
        else if (i % 3 == 0)         // 3의 배수일 때
            printf("Fizz\n");        // Fizz 출력
        else if (i % 5 == 0)         // 5의 배수일 때
            printf("Buzz\n");        // Buzz 출력
        else
            printf("%d\n", i);       // 아무것도 해당되지 않을 때 숫자 출력
    }

    return 0;
}*/
//최소공배수 사용

//33.5 코드 단축하기
/*#include <stdio.h>

int main()
{
    for (int i = 0; ++i <= 100;)    // 조건식 안에서 변화식을 함께 작성
        printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FizzBuzz\n", i);
        // 삼항 연산자를 세 번 사용하여 printf 안에서 처리

    return 0;
}*/