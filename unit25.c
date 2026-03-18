//연산자 우선순위 알아보기
//25.1 괄호 사용하기
/*#include <stdio.h>

int main()
{
    int num1;
 
    num1 = (35 + 1) * 2;    // 괄호를 사용하여 35 + 1을 먼저 계산한 뒤 2를 곱함

    printf("%d\n", num1);    // 72

    return 0;
}*/
/*여기서 괄호를 사용한 계산식의 계산 순서는 다음과 같습니다.
1. 괄호를 사용한 연산자
2. 우선순위가 높은 연산자
3. 결합방향에 따라 순서대로 계산(+, *는 왼쪽에서 오른쪽)*/
//25.2 연산자의 결합 방향 알아보기
/*#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2;

    num2 = ++num1;    // 변수를 먼저 평가하고 앞에 있는 ++을 계산

    printf("%d\n", num2);    // 2

    return 0;
}*/
//++, --와 =뿐만 아니라 +(양의 부호), -(음의 부호), !, ~ 등 변수나 숫자 앞쪽에 붙는 연산자도 ← 방향입니다. 
// 단, 변수 뒤에 붙는 ++, --는 연산 방향이 → 입니다

//25.3 결합 방향이 다른 연산자와 괄호 사용하기
/*#include <stdio.h>

int main()
{
    int num1;
    int num2 = 3;

    num1 = 10 + 2 / (5 - 3) * ++num2;    // 괄호와 증가 연산자를 먼저 계산

    printf("%d\n", num1);    // 14
    
    return 0;
}*/

//25.4 논리, 비교, 시프트 연산자에 괄호 사용하기
/*#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool b1;

    b1 = (false || false) && !false || false;    // 논리 연산자의 우선순위는 !,&& , || 순

    printf("%d\n", b1);    // 0: false AND true 이므로 0

    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int num1;

    num1 = 5 == 5 < 10;    // ==보다 <의 우선순위가 높음

    printf("%d\n", num1);    // 0

    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3;

    num3 = num1 << 2 + num2 << 1;    // <<보다 +의 우선순위가 높음

    printf("%d\n", num3);    // 32
    
    return 0;
}*/