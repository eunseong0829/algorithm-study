//문자열의 길이 구하고 비교하기
//41.1 문자열 길이 구하기
/*문자열은 문자가 여러 개 모여있으므로 길이가 있습니다. 문자열의 길이는 strlen 함수로 구할 수 있다
함수 이름은 문자열 길이(string length)에서 따왔습니다(string.h 헤더 파일에 선언되어 있습니다)*/
/*
strlen(문자열포인터);
strlen(문자배열);
size_t strlen(const *_Str);
문자열의 길이를 반환*/
/*#include <stdio.h>
#include <string.h>    // strlen 함수가 선언된 헤더 파일

int main()
{
    char *s1 = "Hello";       // 포인터에 문자열 Hello의 주소 저장
    char s2[10] = "Hello";    // 크기가 10인 char형 배열을 선언하고 문자열 할당

    printf("%d\n", strlen(s1));    // 5: strlen 함수로 문자열의 길이를 구함
    printf("%d\n", strlen(s2));    // 5: strlen 함수로 문자열의 길이를 구함

    return 0;
}*/
//배열이 크든 작든 문자열의 크기만 구함

//41.2 문자열 비교하기
/**/