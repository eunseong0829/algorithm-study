//입력 값을 문자열에 저장하기
//40.1 입력 값을 배열 형태의 문자열에 저장하기
//scanf 함수에서 서식 지정자 %s를 사용하면 입력 값을 배열 형태의 문자열에 저장할 수 있다(scanf("%s", 배열)
/*#define _CRT_SECURE_NO_WARNINGS // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char s1[10];    // 크기가 10인 char형 배열을 선언

    printf("문자열을 입력하세요: ");
    scanf("%s", s1);     // 표준 입력을 받아서 배열 형태의 문자열에 저장

    printf("%s\n", s1);  // 문자열의 내용을 출력

    return 0;
}*/
//scanf 함수에서 서식 지정자를 "%[^\n]s"와 같이 지정하면 공백까지 포함하여 문자열을 입력받을 수 있습니다.

//40.2 입력 값을 문자열 포인터에 저장하기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char *s1 = "Hello";    // 문자열 포인터를 선언하고 문자열 할당

    printf("문자열을 입력하세요: ");
    scanf("%s", s1);    // 실행 에러

    printf("%s\n", s1);

    return 0;
}*/
/*얼핏 보면 저장이 될 것 같지만 실행을 해보면 에러가 발생합니다. 왜냐하면 s1에 저장된 메모리 주소는 읽기만 할 수 있고, 
쓰기가 막혀있기 때문입니다. 따라서 s1과 같이 문자열 리터럴의 주소가 할당된 포인터는 scanf 함수에서 사용할 수 없습니다*/
//입력 값을 문자열 포인터에 저장하려면 문자열이 들어갈 공간을 따로 마련해야 해 malloc 함수로 메모리를 할당한 뒤 저장한다(scanf("%s", 문자열포인터)
/*#define _CRT_SECURE_NO_WARNINGS     // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    char *s1 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당

    printf("문자열을 입력하세요: ");
    scanf("%s", s1);      // 표준 입력을 받아서 메모리가 할당된 문자열 포인터에 저장

    printf("%s\n", s1);   // 문자열의 내용을 출력

    free(s1);    // 동적 메모리 해제

    return 0;
}*/

//40.3 문자열을 여러 개 입력받기
/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main()
{
    char s1[10];    // 크기가 10인 char형 배열을 선언
    char s2[10];    // 크기가 10인 char형 배열을 선언

    printf("문자열을 두 개 입력하세요: ");
    scanf("%s %s", s1, s2);    // 표준 입력에서 공백으로 구분된 문자열 두 개를 입력받음

    printf("%s\n", s1);    // s1의 내용을 출력
    printf("%s\n", s2);    // s2의 내용을 출력

    return 0;
}*/