//포인터와 배열 응용하기
//38.1 포인터에 할당된 메모리를 배열처럼 사용하기
//자료형 *포인터이름 = malloc(sizeof(자료형) * 크기);
/*#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int *numPtr = malloc(sizeof(int) * 10);    // int 10개 크기만큼 동적 메모리 할당

    numPtr[0] = 10;    // 배열처럼 인덱스로 접근하여 값 할당
    numPtr[9] = 20;    // 배열처럼 인덱스로 접근하여 값 할당

    printf("%d\n", numPtr[0]);    // 배열처럼 인덱스로 접근하여 값 출력
    printf("%d\n", numPtr[9]);    // 배열처럼 인덱스로 접근하여 값 출력

    free(numPtr);    // 동적으로 할당한 메모리 해제

    return 0;
}*/

//38.2 입력한 크기만큼 메모리를 할당하여 배열처럼 사용하기
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int size;

    scanf("%d", &size);

    int *numPtr = malloc(sizeof(int) * size);    // (int 크기 * 입력받은 크기)만큼 동적 메모리 할당

    for (int i = 0; i < size; i++)    // 입력받은 크기만큼 반복
    {
        numPtr[i] = i;                // 인덱스로 접근하여 값 할당
    }

    for (int i = 0; i < size; i++)    // 입력받은 크기만큼 반복
    {
        printf("%d\n", numPtr[i]);    // 인덱스로 접근하여 값 출력
    }

    free(numPtr);    // 동적으로 할당한 메모리 해제

    return 0;
}*/

//38.3 포인터에 할당된 메모리를 2차원 배열처럼 사용하기
/*자료형 **포인터이름 = malloc(sizeof(자료형 *) * 세로크기);와 같이 세로 공간 메모리 할당
반복문으로 반복하면서 포인터[i] = malloc(sizeof(자료형) * 가로크기);와 같이 가로 공간 메모리 할당
반복문으로 반복하면서 free(포인터[i]);와 같이 가로 공간 메모리 해제
free(포인터);와 같이 세로 공간 메모리 해제*/
/*#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int **m = malloc(sizeof(int *) * 3);   // 이중 포인터에 (int 포인터 크기 * 세로 크기)만큼
                                           // 동적 메모리 할당. 배열의 세로

    for (int i = 0; i < 3; i++)            // 세로 크기만큼 반복
    {
        m[i] = malloc(sizeof(int) * 4);    // (int 크기 * 가로 크기)만큼 동적 메모리 할당.
                                           // 배열의 가로
    }

    m[0][0] = 1;    // 세로 인덱스 0, 가로 인덱스 0인 요소에 값 할당
    m[2][0] = 5;    // 세로 인덱스 2, 가로 인덱스 0인 요소에 값 할당
    m[2][3] = 2;    // 세로 인덱스 2, 가로 인덱스 3인 요소에 값 할당

    printf("%d\n", m[0][0]);    // 1: 세로 인덱스 0, 가로 인덱스 0인 요소의 값 출력
    printf("%d\n", m[2][0]);    // 5: 세로 인덱스 2, 가로 인덱스 0인 요소의 값 출력
    printf("%d\n", m[2][3]);    // 2: 세로 인덱스 2, 가로 인덱스 3인 요소의 값 출력

    for (int i = 0; i < 3; i++)    // 세로 크기만큼 반복
    {
        free(m[i]);                // 2차원 배열의 가로 공간 메모리 해제
    }

    free(m);    // 2차원 배열의 세로 공간 메모리 해제

    return 0;
}*/

//38.4 입력한 크기만큼 메모리를 할당하여 포인터를 2차원 배열처럼 사용하기
/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

int main()
{
    int row, col;

    scanf("%d %d", &row, &col);

    int **m = malloc(sizeof(int *) * row);   // 이중 포인터에 (int 포인터 크기 * row)만큼
                                             // 동적 메모리 할당. 배열의 세로

    for (int i = 0; i < row; i++)            // 세로 크기만큼 반복
    {
        m[i] = malloc(sizeof(int) * col);    // (int의 크기 * col)만큼 동적 메모리 할당. 배열의 가로
    }

    for (int i = 0; i < row; i++)    // 세로 크기만큼 반복
    {
        for (int j = 0; j < col; j++)    // 가로 크기만큼 반복
        {
            m[i][j] = i + j;             // 2차원 배열의 각 요소에 i + j 값을 할당
        }
    }

    for (int i = 0; i < row; i++)    // 세로 크기만큼 반복
    {
        for (int j = 0; j < col; j++)    // 가로 크기만큼 반복
        {
            printf("%d ", m[i][j]);      // 2차원 배열의 인덱스에 반복문의 변수 i, j를 지정
        }
        printf("\n");                // 가로 요소를 출력한 뒤 다음 줄로 넘어감
    }

    for (int i = 0; i < row; i++)    // 세로 크기만큼 반복
    {
        free(m[i]);                  // 2차원 배열의 가로 공간 메모리 해제
    }

    free(m);    // 2차원 배열의 세로 공간 메모리 해제

    return 0;
}*/