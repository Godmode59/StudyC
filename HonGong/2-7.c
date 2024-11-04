#include <stdio.h>

int main(void)
{
    printf("%c\n", 'A');  //문자 상수 출력
    printf("%s\n", "A");  //문자열 상수 출력
    printf("%c은 %s입니다.\n", '1', "first");  //문자(%c)와 문자열(%s)을 함께 출력

    //아쉽게도 한글이 출력이 안되는 것같으니 이제부터 영어로 예제 작성하겠음..

    return 0;
}