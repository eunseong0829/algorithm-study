//switch 분기문으로 다양한 조건 처리하기
/*switch 분기문은 항상 case와 함께 사용하는데 변수의 값이 case에 지정한 값과 일치하면 해당 코드를 실행하게 됩니다
(단, case에는 조건식이나 변수를 지정할 수 없습니다). 그리고 아무 case에도 해당되지 않으면 
default의 코드를 실행합니다(default는 생략할 수 있습니다)*/
/*switch (버튼)
{
case 1:    // 콜라 버튼
    콜라를 내보냄
    break;
case 2:    // 사이다 버튼
    사이다를 내보냄
    break;
case 3:    // 환타 버튼
    환타를 내보냄
    break;
default: 
    제공하지 않는 메뉴
    break;
}*/
//이처럼 switch 분기문은 형식이 균일하며 처리해야 할 조건이 많을 때 사용합니다

//26.1 사용자가 입력한 값에 따라 문자열 출력하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // 값을 입력받음

    switch (num1)   // num1의 값에 따라 분기
    {
    case 1:         // 1일 때
        printf("1입니다.\n");
        break;
    case 2:         // 2일 때
        printf("2입니다.\n");
        break;
    default:        // 아무 case에도 해당되지 않을 때
        printf("default\n");
        break;
    }

    return 0;
}*/
/*case 다음에는 반드시 값(리터럴)이 와야 하며 변수나 조건식은 올 수 없습니다. 그리고 
case에 값을 지정했으면 : (콜론)을 붙여 준 뒤 다음 줄부터 실행할 코드를 입력합니다. 또한, 코드의 마지막에는 break를 입력합니다*/
//이걸 if식으로 바꾸면
/*if (num1 == 1)       // 1일 때
    printf("1입니다.\n");
else if (num1 == 2)  // 2일 때
    printf("2입니다.\n");
else                 // 1도 아니고 2도 아닐 때
    printf("default\n");*/
/*if는 첫 조건식 다음에 else if로 다른 조건식을 일일이 지정해줘야 합니다. 
즉, 조건식이 바뀌지 않고 값만 바뀔 때는 switch가 적합하며, 값과 조건식이 모두 바뀔 때는 else if가 적합합니다*/

//26.2 case에서 break를 사용하지 않을때의 동작 알아보기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // 값을 입력받음

    // switch의 case에서 break 삭제
    switch (num1)
    {
    case 1:    // 1일 때는 아래 case 2, default가 모두 실행됨
        printf("1입니다.\n");
    case 2:    // 2일 때는 아래 default까지 실행됨
        printf("2입니다.\n");
    default:
        printf("default\n");
    }

    return 0;
}*/
//break로 중단하지 않으면 그다음에 있는 case,default가 계속 실행된다

//26.3 case에서 break 생략 응용하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // 값을 입력받음

    switch (num1)
    {
    case 1:    // 1 또는
    case 2:    // 2일 때 코드 실행
        printf("1 또는 2입니다.\n");
        break;
    case 3:    // 3 또는
    case 4:    // 4일 때 코드 실행
        printf("3 또는 4입니다.\n");
        break;
    default:
        printf("default\n");
    }

    return 0;
}*/
//즉, case에서 break를 생략하면 여러 가지 값으로 같은 코드를 실행할 수 있습니다

//26.4 case 안에서 변수 선언하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    scanf("%d", &num1);    // 값을 입력받음

    switch (num1)    // num1의 값에 따라 분기
    {
    case 1:
    {   // case에서 변수를 선언하려면 중괄호로 묶어줌
        int num2 = num1;
        printf("%d입니다.\n", num2);
        break;
    }
    case 2:
        printf("2입니다.\n");
        break;
    default:
        printf("default\n");
        break;
    }

    return 0;
}*/
//case 부분을 중괄호로 묶어주면 에러가 발생하지 않고 변수를 선언할 수 있다

//26.5 switch에서 판별할 수 있는 자료형 알아보기
//switch 자료형에서는 정수 자료형만 사용할 수 있고, 실수 자료형은 사용할 수 없다
//단 문자료형도 정수 자료형이기 때문에 사용할 수 있다
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char c1;

    scanf("%c", &c1);     // 값을 입력받음

    switch (c1)  // c1의 값에 따라 분기
    {
    case 'a':    // 문자 a일 때
        printf("a입니다.\n");
        break;
    case 'b':    // 문자 b일 때
        printf("b입니다.\n");
        break;
    default:    // 아무 case에도 해당되지 않을 때
        printf("default\n");
        break;
    }

    return 0;
}*/
//단 case "hello"처럼 문자열은 사용할 수 없다