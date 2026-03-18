//비트 연산자 사용하기
/*
연산자	설명
&	비트 AND
|	비트 OR
^	비트 XOR (배타적 OR, Exclusive OR)
~	비트 NOT
<<	비트를 왼쪽으로 시프트
>>	비트를 오른쪽으로 시프트
&=	비트 AND 연산 후 할당
|=	비트 OR 연산 후 할당
^=	비트 XOR 연산 후 할당
<<=	비트를 왼쪽으로 시프트한 후 할당
>>=	비트를 오른쪽으로 시프트한 후 할당
*/
//비트 연산자는 비트로 옵션을 설정할 때 주로 사용하며 저장 공간을 아낄 수 있는 장점이 있습니다. 특히 이런 방식을 플래그(flag)라고 부릅니다

//23.1 비트 and, or, xor 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    unsigned char num1 = 1;    // 0000 0001
    unsigned char num2 = 3;    // 0000 0011
 
    printf("%d\n", num1 & num2);    // 0000 0001: 01과 11을 비트 AND하면 01이 됨
    printf("%d\n", num1 | num2);    // 0000 0011: 01과 11을 비트 OR하면 11이 됨
    printf("%d\n", num1 ^ num2);    // 0000 0010: 01과 11을 비트 XOR하면 10이 됨
 
    return 0;
}*/

//비트 not 연산자 사용하기
/*#include <stdio.h>

int main()
{
    unsigned char num1 = 162;    // 162: 1010 0010
    unsigned char num2;

    num2 = ~num1;

    printf("%u\n", num2);    // 93: 0101 1101: num1의 비트 값을 뒤집음

    return 0;
}*/

//23.3 시프트 연산자 사용하기
/*#include <stdio.h>
 
int main()
{
    unsigned char num1 = 3;     //  3: 0000 0011
    unsigned char num2 = 24;    // 24: 0001 1000
 
    printf("%u\n", num1 << 3);  // 24: 0001 1000: num1의 비트 값을 왼쪽으로 3번 이동
    printf("%u\n", num2 >> 2);  //  6: 0000 0110: num2의 비트 값을 오른쪽으로 2번 이동
 
    return 0;
}*/
//3 << 3은 3 * 2의 3제곱과 같으므로 24가 되고, 24 >> 2는 24 / 2의 제곱과 같으므로 6이 됩니다. 즉, 
// 시프트 연산 <<은 2의 거듭제곱을 곱하기, >>은 2의 거듭제곱을 나누기입니다

//23.4 비트 연산 후 할당하기
/*#include <stdio.h> 

int main()
{
    unsigned char num1 = 4;    // 4: 0000 0100
    unsigned char num2 = 4;    // 4: 0000 0100
    unsigned char num3 = 4;    // 4: 0000 0100
    unsigned char num4 = 4;    // 4: 0000 0100
    unsigned char num5 = 4;    // 4: 0000 0100
 
    num1 &= 5;     // 5(0000 0101) AND 연산 후 할당
    num2 |= 2;     // 2(0000 0010) OR 연산 후 할당
    num3 ^= 3;     // 3(0000 0011) XOR 연산 후 할당
    num4 <<= 2;    // 비트를 왼쪽으로 2번 이동한 후 할당
    num5 >>= 2;    // 비트를 오른쪽으로 2번 이동한 후 할당
 
    printf("%u\n", num1);    //  4: 0000 0100: 100과 101을 비트 AND하면 100이 됨
    printf("%u\n", num2);    //  6: 0000 0110: 100과 010을 비트 OR하면 110이 됨
    printf("%u\n", num3);    //  7: 0000 0111: 100과 011을 비트 XOR하면 111이 됨
    printf("%u\n", num4);    // 16: 0001 0000: 100을 왼쪽으로 2번 이동하면 10000이 됨
    printf("%u\n", num5);    //  1: 0000 0001: 100을 오른쪽으로 2번 이동하면 1이 됨
 
    return 0;
}*/