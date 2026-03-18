//상수 사용하기
/*상수는 변하지 않는 값을 뜻합니다.변수는 한 번 선언하면 값을 계속 바꿀 수 있지만 상수는 처음 선언할 때만 값을 할당할 수 있으며 
그다음부터는 값을 바꿀 수 없습니다.*/
//상수와 리터럴을 구분할 필요가 있다
//           ↓ 상수
//const int con1 = 10;
//                 ↑ 리터럴
/*리터럴(literal)은 "문자 그대로"라는 뜻인데 C 언어에서는 값 그 자체를 뜻합니다. 그리고 상수(constant)는 변수처럼 리터럴이 저장된 공간입니다*/

//10.1 리터럴 사용하기
/*#include <stdio.h>

int main()
{
    printf("%d\n", 10);                 // 10: 정수 리터럴
    printf("%f\n", 0.1f);               // 0.100000: 실수 리터럴
    printf("%c\n", 'a');                // a: 문자 리터럴
    printf("%s\n", "Hello, world!");    // Hello, world!: 문자열 리터럴

    return 0;
}*/      /*10
         0.100000
         a
         Hello, world!*/
//큰따옴표로 묶인 문자열을 출력할 때는 서식 지정자 %s를 사용한다
/*#include <stdio.h>

int main()
{
    printf("%d\n", 19);        // 19: 10진 정수 리터럴
    printf("0%o\n", 017);      // 017: 8진 정수 리터럴
    printf("0x%X\n", 0x1F);    // 0x1F: 16진 정수 리터럴

    return 0;
}*/       /*19
          017
          0x1F*/
/* 이때 printf에서 8진수를 출력하려면 서식 지정자로 %o를 사용합니다. 여기서 %o로는 8진수 숫자만 출력되므로 10진수와 구분하기 힘듭니다 
그래서 보통 %o앞에 숫자 0을 붙여서 017형태로 출력합니다.*/

//10.2 상수 사용하기
/*#include <stdio.h>

int main()
{
    const int con1 = 1;         // 상수. 선언과 동시에 초기화
    const float con2 = 0.1f;    // 상수. 선언과 동시에 초기화
    const char con3 = 'a';      // 상수. 선언과 동시에 초기화

    printf("%d %f %c\n", con1, con2, con3);    // 1 0.100000 a

    return 0;
}*/      //1 0.100000 a
/*상수를 선언하는 방법은 변수를 선언하는 방법과 같으며 자료형 앞에 const만 붙여주면 됩니다. 
단, 상수는 반드시 선언과 동시에 값을 할당하여 초기화해주어야 하며 초기화를 하지 않으면 컴파일 에러가 발생합니다. 
물론 상수도 변수처럼 printf에서 상수 이름을 사용하여 저장된 값을 출력할 수 있습니다.*/
/*#include <stdio.h>

int main()
{
    const int con1 = 1;

    con1 = 2;    // 상수에 값을 할당하면 컴파일 에러 발생

    printf("%d\n", con1);

    return 0;
}*/   //error
//이런식으로 상수는 고정된 값이기 때문에 const를 붙여 상수가 된 후에는 더는 값을 할당할 수 없다

//10.3 정수 리터럴 접미사 사용하기
/*#include <stdio.h>

int main()
{
    printf("%ld\n", -10L);                       // long 크기의 정수 리터럴
    printf("%lld\n", -1234567890123456789LL);    // long long 크기의 정수 리터럴

    printf("%u\n", 10U);                         // unsigned int 크기의 정수 리터럴
    printf("%lu\n", 1234567890UL);               // unsigned long 크기의 정수 리터럴

    printf("%lu\n", 10UL);                       // unsigned long 크기의 정수 리터럴
    printf("%llu\n", 1234567890123456789ULL);    // unsigned long long 크기의 정수 리터럴

    return 0;
}*/     /*-10
        -1234567890123456789
        10
        1234567890
        10
        1234567890123456789*/
/*
접미사	자료형
생략	int
l, L	long
u, U	unsigned int
ul, UL	unsigned long
ll, LL	long long
ull, ULL	unsigned long long*/
/*접미사는 대문자, 소문자를 모두 사용할 수 있으며 l과 u를 조합하여 크기와 부호 유무를 표현합니다(대소문자를 섞어 쓸 수 있습니다).
접미사를 생략하면 int 크기가 됩니다.
10진수뿐만 아니라 8진수와 16진수에도 접미사를 사용할 수 있습니다.*/

//10.4 실수 리터럴 접미사 사용하기
/*#include <stdio.h>

int main()
{
    printf("%f\n", 0.1f);     // 0.100000: float 크기의 실수 리터럴
    printf("%f\n", 0.1F);     // 0.100000: float 크기의 실수 리터럴
    printf("%f\n", 0.1);      // 0.100000: double 크기의 실수 리터럴
    printf("%Lf\n", 0.1l);    // 0.100000: long double 크기의 실수 리터럴
    printf("%Lf\n", 0.1L);    // 0.100000: long double 크기의 실수 리터럴

    printf("%f\n", 1.0e-5f);     // 0.000010: float 크기의 실수 리터럴
    printf("%f\n", 1.0e-5F);     // 0.000010: float 크기의 실수 리터럴
    printf("%f\n", 1.0e-5);      // 0.000010: double 크기의 실수 리터럴
    printf("%Lf\n", 1.0e-5l);    // 0.000010: long double 크기의 실수 리터럴
    printf("%Lf\n", 1.0e-5L);    // 0.000010: long double 크기의 실수 리터럴

    return 0;
}*/
/*
접미사	자료형
f, F	float
생략	double
l, L	long double*/