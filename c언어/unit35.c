//메모리 사용하기
//메모리는 malloc → 사용 → free 패턴으로 사용합니다

//35.1
/*메모리를 사용하려면 malloc 함수로 사용할 메모리 공간을 확보해야 합니다(memory allocation). 
이때 필요한 메모리 크기는 바이트 단위로 지정합니다(메모리 할당, 해제 함수는 stdlib.h 헤더 파일에 선언되어 있습니다).

포인터 = malloc(크기);
void *malloc(size_t _Size);
성공하면 메모리 주소를 반환, 실패하면 NULL을 반환*/
/*#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int num1 = 20;    // int형 변수 선언
    int *numPtr1;     // int형 포인터 선언

    numPtr1 = &num1;  // num1의 메모리 주소를 구하여 numPtr에 할당

    int *numPtr2;     // int형 포인터 선언

    numPtr2 = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당

    printf("%p\n", numPtr1);    // 006BFA60: 변수 num1의 메모리 주소 출력
                                // 컴퓨터마다, 실행할 때마다 달라짐

    printf("%p\n", numPtr2);     // 009659F0: 새로 할당된 메모리의 주소 출력
                                // 컴퓨터마다, 실행할 때마다 달라짐

    free(numPtr2);    // 동적으로 할당한 메모리 해제

    return 0;
}*/
/*malloc 함수를 사용하여 힙에서 할당한 메모리는 반드시 해제를 해주어야 합니다. 따라서 다음과 같이 free 함수로 메모리를 해제합니다.

free(포인터);
void free(void *_Block);*/

//35.2 메모리에 값 저장하기
/*#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int *numPtr;    // int형 포인터 선언

    numPtr = malloc(sizeof(int));    // int의 크기 4바이트만큼 동적 메모리 할당

    *numPtr = 10;   // 포인터를 역참조한 뒤 값 할당

    printf("%d\n", *numPtr);    // 10: 포인터를 역참조하여 메모리에 저장된 값 출력

    free(numPtr);    // 동적 메모리 해제

    return 0;
}*/

//35.3 메모리 내용을 한꺼번에 설정하기
/*memset 함수를 사용하면 메모리의 내용을 원하는 크기만큼 특정값으로 설정할 수 있으며 함수 이름은 memory set에서 따왔습니다
(string.h 헤더 파일에 선언되어 있습니다). 이때 설정하는 크기는 바이트 단위입니다.

memset(포인터, 설정할값, 크기);
void *memset(void *_Dst, int _Val, size_t _Size);
값 설정이 끝난 포인터를 반환*/
/*#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h>    // memset 함수가 선언된 헤더 파일

int main()
{
    long long *numPtr = malloc(sizeof(long long));  // long long의 크기 8바이트만큼 동적 메모리 할당

    memset(numPtr, 0x27, 8);    // numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정

    printf("0x%llx\n", *numPtr);    // 0x2727272727272727: 27이 8개 들어가 있음

    free(numPtr);    // 동적으로 할당한 메모리 해제

    return 0;
}*/
/*memset 함수는 주로 다음과 같이 설정할 값을 0으로 지정하여 메모리의 내용을 모두 0으로 만들 때 주로 사용합니다.

memset(numPtr, 0, 8);    // numPtr이 가리키는 메모리를 8바이트만큼 0으로 설정*/

//35.4 널 포인터 사용하기
/*#include <stdio.h>

int main()
{
    int *numPtr1 = NULL;    // 포인터에 NULL 저장

    printf("%p\n", numPtr1);    // 00000000

    return 0;
}*/
// ** 메모리를 할당했으면 해제해야 한다