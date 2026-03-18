//입력 값을 변수에 저장하기
//11.1 정수 입력받기
/*scanf(서식, 변수의주소);
int scanf(char const * const _Format, ...);
성공하면 가져온 값의 개수를 반환, 실패하면 EOF(-1)를 반환*/
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1;

    printf("정수를 입력하세요: ");
    scanf("%d", &num1);    // 표준 입력을 받아서 변수에 저장

    printf("%d\n", num1);    // 변수의 내용을 출력

    return 0;
}*/
//scanf 함수는 표준 입력을 받아 변수에 저장하는 함수이다 주의할 점으로는 위의 &num1처럼 변수 앞에 &를 붙여주어야 한다
//scanf 함수로 입력값을 저장한뒤 printf 함수로 출력하면 입력한 그대로 값이 출력된다
/*맨 처음 #define _CRT_SECURE_NO_WARNINGS는 Visual Studio에서만 넣어주면 됩니다(리눅스, OS X 사용자라면 넣지 않아도 됩니다). 
scanf는 나온 지 오래된 함수라 입력 값의 길이를 설정할 수가 없습니다. 따라서 보안에 취약하기 때문에 Visual Studio에서는 사용하지 말라는 경고가 
출력되고 컴파일 에러가 발생합니다. 하지만 여기서는 C 언어를 배우는 과정이므로 scanf 함수를 그대로 사용하겠습니다.*/

//11.2 한 번에 정수 두 개 입력받기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    int num1, num2;

    printf("정수를 두 개 입력하세요: ");
    scanf("%d %d", &num1, &num2);    // 값을 두 개 입력받아서 변수 두 개에 저장

    printf("%d %d\n", num1, num2);    // 변수의 내용을 출력

    return 0;
}*/

//11.3 실수 입력받기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    float num1;

    printf("실수를 입력하세요: ");
    scanf("%f", &num1);    // 실수를 입력받아서 변수에 저장

    printf("%f\n", num1);    // 변수의 내용을 출력

    return 0;
}*/
/*실수를 입력받을 것이므로 변수는 float로 선언해주고, scanf에 서식 지정자로 %f를 설정해줍니다. 즉, 입력받고자 하는 자료형에 맞게 변수를 선언하고, 
서식 지정자도 맞춰줍니다. 만약 정수 1을 입력하더라도 서식 지정자가 %f이고 float 변수에 저장되므로 1.0이 됩니다.*/
/*여기서 변수를 double로 선언했다면 scanf에는 서식 지정자로 %lf를 넣고, 
long double로 선언했다면 %Lf를 넣습니다(double은 printf로 출력할 때 %f를 써도 되지만 scanf는 %lf를 써야 합니다).*/

//11.4 문자 입력받기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char c1;

    printf("문자를 입력하세요: ");
    scanf("%c", &c1);    // 문자를 입력받아서 변수에 저장

    printf("%c\n", c1);    // 변수의 내용을 출력

    return 0;
}*/