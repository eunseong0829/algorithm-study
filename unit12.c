//덧셈, 뺄셈하기
//12.1 덧셈, 뺄셈하기
/*#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 1 + 2;    // 1에 2를 더해서 num1에 저장
    num2 = 1 - 2;    // 1에서 2를 빼서 num2에 저장

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}*/

//12.2 변수 하나에서 값을 더하거나 빼기
/*#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 1;

    num1 = num1 + 2;    // num1에 2를 더한 뒤 다시 num1에 저장
    num2 = num2 - 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}*/
/*C 언어에서는 num1 = num1 + 2;와 같이 num1을 두 번 입력하지 않도록 덧셈 후 할당 +=, 뺄셈 후 할당 -= 연산자를 제공합니다.

변수 += 값
변수 -= 값*/
/*#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 1;

    num1 += 2;    // num1에 2를 더한 뒤 다시 num1에 저장(2를 증가시킴)
    num2 -= 2;    // num2에서 2를 뺀 뒤 다시 num2에 저장(2를 감소시킴)

    printf("%d\n", num1);    //  3
    printf("%d\n", num2);    // -1

    return 0;
}*/