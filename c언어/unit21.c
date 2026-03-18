//논리 연산자 사용하기
/*
연산자	설명
&&	AND(논리곱), 양쪽 모두 참일 때 참
||	OR(논리합), 양쪽 중 한쪽만 참이라도 참
!	NOT(논리 부정), 참과 거짓을 뒤집음
*/

//21.1 and 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    printf("%d\n", 1 && 1);    // 1: 1 AND 1은 참
    printf("%d\n", 1 && 0);    // 0: 1 AND 0은 거짓
    printf("%d\n", 0 && 1);    // 0: 0 AND 1은 거짓
    printf("%d\n", 0 && 0);    // 0: 0 AND 0은 거짓
 
    printf("%d\n", 2 && 3);    // 1: 2 AND 3은 참
 
    return 0;
}*/
/*논리 연산에서 중요한 부분이 단락 평가(short-circuit evalution)입니다. 단락 평가는 첫 번째 값만으로 결과가 확실할 때 
두 번째 값은 확인(평가)하지 않는 방법을 말합니다. 즉, AND 연산자는 두 값이 모두 참이라야 참이므로 첫 번째 값이 거짓이면 
두 번째 값은 확인하지 않고 바로 거짓으로 결정합니다*/

//21.2 or 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    printf("%d\n", 1 || 1);    // 1: 1 OR 1은 참
    printf("%d\n", 1 || 0);    // 1: 1 OR 0은 참
    printf("%d\n", 0 || 1);    // 1: 0 OR 1은 참
    printf("%d\n", 0 || 0);    // 0: 0 OR 0은 거짓
 
    printf("%d\n", 2 || 3);    // 1: 2 OR 3은 참
    
    return 0;
}*/
//OR 연산자는 두 값 중 하나만 참이라도 참이므로 첫 번째 값이 참이면 두 번째 값은 확인하지 않고 바로 참으로 결정합니다

//21.3 not 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    printf("%d\n", !1);    // 0: NOT 1은 거짓
    printf("%d\n", !0);    // 1: NOT 0은 참
 
    printf("%d\n", !3);    // 0: NOT 3은 거짓
 
    return 0;
}*/
//NOT 연산자는 값, 변수, 함수 앞에 !를 붙여서 사용합니다. !는 참은 거짓으로, 거짓은 참으로 논릿값을 뒤집습니다

//21.4 조건식과 논리 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    int num1 = 20;
    int num2 = 10;
    int num3 = 30;
    int num4 = 15;
 
    printf("%d\n", num1 > num2 && num3 > num4);    // 1: 양쪽 모두 참이므로 참
    printf("%d\n", num1 > num2 && num3 < num4);    // 0: 앞만 참이므로 거짓
    
    printf("%d\n", num1 > num2 || num3 < num4);    // 1: 앞만 참이므로 참
    printf("%d\n", num1 < num2 || num3 < num4);    // 0: 양쪽 모두 거짓이므로 거짓
 
    printf("%d\n", !(num1 > num2));    // 0: 참의 NOT은 거짓
 
    return 0;
}*/
//비교 연산자와 논리 연산자가 연달아서 나오면 알아보기가 어렵습니다. 따라서 다음과 같이 괄호를 사용하여 의도를 명확하게 나타내는 것이 좋습니다

//21.5 if 조건문과 논리 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    int num1 = 1;
    int num2 = 0;
 
    if (num1 && num2)      // num1과 num2가 모두 참인지 검사
        printf("참\n");
    else
        printf("거짓\n");  // num1만 참이므로 거짓이 출력됨
 
    if (num1 || num2)      // num1과 num2 둘 줄 하나가 참인지 검사
        printf("참\n");    // num1이 참이므로 참이 출력됨
    else
        printf("거짓\n");
 
    if (!num1)             // num1을 반대로 뒤집음
        printf("참\n");
    else
        printf("거짓\n");  // 참을 뒤집었으므로 거짓이 출력됨
 
    return 0;
}*/

//21.6 삼항 연산자에 논리 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    int num1 = 1;
    int num2 = 0;
 
    printf("%s\n", num1 && num2 ? "참" : "거짓");    // 거짓: 삼항 연산자에서 AND 연산자 사용
    printf("%s\n", num1 || num2 ? "참" : "거짓");    // 참: 삼항 연산자에서 OR 연산자 사용
 
    return 0;
}*/