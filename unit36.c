//배열 사용하기
//36.1 배열을 선언하고 요소에 접근하기
/*배열은 변수 이름 뒤에 [ ] (대괄호)를 붙인 뒤 크기를 설정합니다. 그리고 배열을 선언하면서 값을 초기화할 때는 { } (중괄호)를 사용합니다.

자료형 배열이름[크기];
자료형 배열이름[크기] = { 값, 값, 값 };*/
/*#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 배열을 생성하고 값 할당

    printf("%d\n", numArr[0]);    // 11: 배열의 첫 번째(인덱스 0) 요소 출력
    printf("%d\n", numArr[5]);    // 66: 배열의 여섯 번째(인덱스 5) 요소 출력
    printf("%d\n", numArr[9]);    // 110: 배열의 열 번째(인덱스 9) 요소 출력

    return 0;
}*/

//36.2 배열을 0으로 초기화하기
/*#include <stdio.h>

int main()
{
    int numArr[10] = { 0, };      // 배열의 요소를 모두 0으로 초기화

    printf("%d\n", numArr[0]);    // 0: 배열의 첫 번째(인덱스 0) 요소 출력
    printf("%d\n", numArr[5]);    // 0: 배열의 여섯 번째(인덱스 5) 요소 출력
    printf("%d\n", numArr[9]);    // 0: 배열의 열 번째(인덱스 9) 요소 출력

    return 0;
}*/

//36.3 배열의 요소에 값 할당하기
/*#include <stdio.h>

int main()
{
    int numArr[10];     // 크기가 10인 배열 선언
    
    numArr[0] = 11;     // 인덱스가 0인 배열의 요소에 값 할당
    numArr[1] = 22;     // 인덱스가 1인 배열의 요소에 값 할당
    numArr[2] = 33;     // 인덱스가 2인 배열의 요소에 값 할당
    numArr[3] = 44;     // 인덱스가 3인 배열의 요소에 값 할당
    numArr[4] = 55;     // 인덱스가 4인 배열의 요소에 값 할당
    numArr[5] = 66;     // 인덱스가 5인 배열의 요소에 값 할당
    numArr[6] = 77;     // 인덱스가 6인 배열의 요소에 값 할당
    numArr[7] = 88;     // 인덱스가 7인 배열의 요소에 값 할당
    numArr[8] = 99;     // 인덱스가 8인 배열의 요소에 값 할당
    numArr[9] = 110;    // 인덱스가 9인 배열의 요소에 값 할당

    printf("%d\n", numArr[0]);    // 11: 배열의 첫 번째(인덱스 0) 요소 출력
    printf("%d\n", numArr[5]);    // 66: 배열의 여섯 번째(인덱스 5) 요소 출력
    printf("%d\n", numArr[9]);    // 110: 배열의 열 번째(인덱스 9) 요소 출력

    return 0;
}*/
/*배열의 요소에 접근할 때 인덱스로 음수를 지정하거나, 배열의 크기를 벗어난 인덱스를 지정해도 컴파일 에러가 발생하지 않습니다. 
하지만 실행을 해보면 쓰레기값이 출력됩니다. 즉, 배열의 범위를 벗어난 인덱스에 접근하면 배열이 아닌 다른 메모리 공간에 접근하게 됩니다*/

//36.4 배열의 크기 구하기
/*#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열

    printf("%d\n", sizeof(numArr));                  // 40: 4바이트 크기의 요소가 10개이므로 40
    printf("%d\n", sizeof(numArr) / sizeof(int));    // 10: 배열의 크기(요쇼 개수)를 구할 때는
                                                     // 전체 공간을 요소의 크기로 나눠줌

    return 0;
}*/

//36.5 반복문으로 배열의 요소를 모두 출력하기
/*#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
    {
        printf("%d\n", numArr[i]);    // 배열의 인덱스에 반복문의 변수 i를 지정
    }

    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 }; // 크기가 10인 int형 배열

    for (int i = sizeof(numArr) / sizeof(int) - 1; i >= 0; i--)   // 요소 개수 - 1부터 역순으로 반복
    {
        printf("%d\n", numArr[i]);    // 배열의 인덱스에 반복문의 변수 i를 지정
    }

    return 0;
}*/

//36.6 배열의 요소 합계 구하기
/*#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열
    int sum = 0;    // 합을 저장할 변수는 0으로 초기화

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
    {
        sum += numArr[i];    // sum과 배열의 요소를 더해서 다시 sum에 저장
    }

    printf("%d\n", sum);    // 605

    return 0;
}*/

//36.7 배열의 요소에 저장된 값을 두 배로 만들기
/*#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
    {
        numArr[i] *= 2;    // 배열의 요소에 2를 곱해서 다시 요소에 저장
    }

    for (int i = 0; i < sizeof(numArr) / sizeof(int); i++)    // 배열의 요소 개수만큼 반복
    {
        printf("%d\n", numArr[i]);
    }

    return 0;
}*/

//36.8 배열을 포인터에 넣기
/*#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110 };    // 크기가 10인 int형 배열

    int *numPtr = numArr;       // 포인터에 int형 배열을 할당

    printf("%d\n", *numPtr);    // 11: 배열의 주소가 들어있는 포인터를 역참조하면 배열의 
                                // 첫 번째 요소에 접근

    printf("%d\n", *numArr);    // 11: 배열 자체를 역참조해도 배열의 첫 번째 요소에 접근

    printf("%d\n", numPtr[5]);  // 66: 배열의 주소가 들어있는 포인터는 인덱스로 접근할 수 있음

    printf("%d\n", sizeof(numArr));    // 40: sizeof로 배열의 크기를 구하면 배열이 메모리에 
                                       // 차지하는 공간이 출력됨

    printf("%d\n", sizeof(numPtr));    // 4 : sizeof로 배열의 주소가 들어있는 포인터의 크기를 
                                       // 구하면 포인터의 크기가 출력됨(64비트라면 8)

    return 0;
}*/

//36.9 배열을 활용하여 10진수를 2진수로 변환하기
//10진수를 0이 될 때까지 2로 계속 나눈 뒤 나머지를 역순으로 읽으면 2진수가 됩니다
/*#include <stdio.h>

int main()
{
    int decimal = 13;
    int binary[20] = { 0, };

    int position = 0;
    while (1)
    {
        binary[position] = decimal % 2;    // 2로 나누었을 때 나머지를 배열에 저장
        decimal = decimal / 2;             // 2로 나눈 몫을 저장

        position++;    // 자릿수 변경

        if (decimal == 0)    // 몫이 0이 되면 반복을 끝냄
            break;
    }

    // 배열의 요소를 역순으로 출력
    for (int i = position - 1; i >= 0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}*/