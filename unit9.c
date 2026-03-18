//문자 자료형 사용하기 
/*C 언어에서는 정수 자료형인 char를 이용하여 문자 한 개를 저장합니다. 다음은 문자 자료형의 크기와 저장할 수 있는 범위입니다.*/
/*char에 문자를 저장할 때는 문자 자체를 저장하는 것이 아니라 문자에 해당하는 정숫값을 저장하게 됩니다. 
다음은 각 정숫값이 어떤 문자에 해당되는지 표로 나타낸 것이며 이 규칙을 아스키(ASCII) 코드라고 부릅니다.*/
//ex) A는 65(0x41)자 a는 97(0x61)(ASCII 코드는 필요할 때마다 찾아보면 되는 부분입니다. 그렇게 부담가지지 않아도 됩니다).
//C 언어에서 문자는 ' ' (작은따옴표)로 묶어서 표현합니다.
// char c1 = 'a'
//작은따옴표는 문자 하나만 묶을 수 있고 두 개 이상은 묶을 수 없다

//9.1 문자 변수 선언하기
/*#include <stdio.h>

int main()
{
    char c1 = 'a';    // 문자 변수를 선언하고 문자 a를 저장
    char c2 = 'b';    // 문자 변수를 선언하고 문자 b를 저장

    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c1, c1);    // a, 97: a의 ASCII 코드값은 97
    printf("%c, %d\n", c2, c2);    // b, 98: b의 ASCII 코드값은 98

    return 0;
}*/   //a, 97   b, 98
/*#include <stdio.h>

int main()
{
    char c1 = 97;    // a의 ASCII 코드값 97 저장
    char c2 = 98;    // b의 ASCII 코드값 98 저장

    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정숫값이 출력됨
    printf("%c, %d\n", c1, c1); // a, 97
    printf("%c, %d\n", c2, c2); // b, 98

    return 0;
}*/     //a, 97   b, 98
//이렇게 문자를 쓰지않고 숫자로 사용해도 a,b가 나온다 97과 'a'는 같기에 어떤 서식지명자를 사용하여 출력하냐에 따라 달라진다.
/*#include <stdio.h>

int main()
{
    char c1 = 0x61;    // a의 ASCII 코드값 0x61 할당
    char c2 = 0x62;    // b의 ASCII 코드값 0x62 할당

    // char를 %c로 출력하면 문자가 출력되고, %d로 출력하면 정수 값이 출력됨
    // %x로 출력하면 16진수로 출력됨
    printf("%c, %d, 0x%x\n", c1, c1, c1);    // a, 97, 0x61
    printf("%c, %d, 0x%x\n", c2, c2, c2);    // b, 98, 0x62

    return 0;
}*/   //a, 97, 0x61    b, 98, 0x62
//16진수로 표현해도 같다
// *문자 자료형에 같은 숫자를 저장해도 문자 '0'과 숫자 0은 전혀 다르니 주의해야 한다

//9.2 문자 연산하기
/*#include <stdio.h>

int main()
{
    printf("%c %d\n", 'a' + 1, 'a' + 1);    // b 98: a는 ASCII 코드값 97이고, 
    // 97에 1을 더하여 98이 되었으므로 b가 출력됨

    printf("%c %d\n", 97 + 1, 97 + 1);      // b 98: ASCII 코드값 97에 1을 더하여 98이 되었으므로 
    // b가 출력됨

    return 0;  
}*/  //b 98 b 98

//9.3 제어 문자 사용하기
/*#include <stdio.h>

int main()
{
    char c1 = 'a';           // 문자 a 할당
    char c2 = 'b';           // 문자 b 할당 
    char lineFeed = '\n';    // 제어 문자 \n 할당

    printf("%c%c%c%c", c1, lineFeed, c2, lineFeed);    // 제어 문자도 %c로 출력할 수 있음

    return 0;
}*/    //a  
       //b
/*10	0x0A	LF	\n	개행, 라인 피드(Line Feed), 새 줄(new line), 줄바꿈
  13	0x0D	CR	\r	복귀, 캐리지 리턴(Carriage Return), 줄의 끝에서 시작 위치로 되돌아감
   9	0x09	TAB	\t	수평 탭(horizontal tab)*/
/*#include <stdio.h>

int main()
{
    char lineFeed = '\n';    // 제어 문자 \n 할당

    printf("%d 0x%x\n", lineFeed, lineFeed);    // 10 0xa: 제어 문자의 ASCII 코드 출력

    return 0; 
}*/   //10 0xa
