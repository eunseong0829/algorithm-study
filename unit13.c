//증가 연산자 사용하기
/*C 언어에서는 ++, --라는 특별한 연산자를 제공합니다. ++는 값을 1 증가시키는 증가 연산자이고, 
--는 값을 1 감소시키는 감소 연산자이며 줄여서 증감 연산자라고도 합니다.*/

//13.1 변수의 값을 1 증가, 감소시키기
//증가 연산은 ++ 연산자를 사용하며 변수 앞, 뒤에 붙일 수 있다(감소 연산도 같음)
/*#include <stdio.h>

int main()
{
    int num1 = 1;

    num1++;    // 정수형 변수의 값을 1 증가시킴

    printf("%d\n", num1);    // 2

    return 0;
}*/ 

//13.2 실수 자료형에 증감 연산자 사용하기
/*#include <stdio.h>

int main()
{
    float num1 = 2.1f;
    float num2 = 2.1f;

    num1++;    // 실수형 변수의 값을 1 증가시킴
    num2--;    // 실수형 변수의 값을 1 감소시킴

    printf("%f %f\n", num1, num2);    // 3.100000 1.100000

    return 0;
}*/

//13.3 문자 자료형에 증감 연산자 사용하기
/*#include <stdio.h>

int main()
{
    char c1 = 'b';
    char c2 = 'b';

    c1++;    // 문자 자료형 변수의 값을 1 증가시킴, 'c'로 바뀜
    c2--;    // 문자 자료형 변수의 값을 1 감소시킴, 'a'로 바뀜

    printf("%c %c\n", c1, c2);    // c a: b에서 1 증가시켰으므로 c, b에서 1 감소시켰으므로 a

    return 0;
}*/

//13.4 증감 연산자의 위치에 따른 차이점 알아보기
/*증감연산자가 변수 뒤에 쓰이면 연산을 나중에 처리하고(후위 연산자) 변수 앞에 쓰이면 연산을 먼저 처리한다(전위 연산자)*/
/*#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;

    printf("%d %d\n", num1++, num2--);    // 2 2: num1, num2의 값을 먼저 출력한 뒤 증감 연산자 동작
    printf("%d %d\n", num1, num2);        // 3 1: 증감 연산자가 동작한 결과

    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;

    printf("%d %d\n", ++num1, --num2);    // 3 1: 증감 연산자가 먼저 동작한 뒤 num1, num2의 값을 출력
    printf("%d %d\n", num1, num2);        // 3 1: 앞과 같은 값이 출력됨

    return 0;
}*/