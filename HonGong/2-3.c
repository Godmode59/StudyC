#include <stdio.h>
//코드에선 제어문자가 \n \t빼고 커서 제어 문자는 안되는것같다.. 왜그렇지?

int main(void)
{
    printf("Be happy\n"); //"Be happy"를 출력하고 줄을 바꿈(\n)
    printf("1234567890\n"); // 화면에 열 번호 출력하고 줄을 바꿈(\n)
    printf("My\tfriend\n");
    //"MY"를 출력하고 탭 위치로 이동(\t) 후에 "friend"를 추력하고 줄을 바꿈(\n)
    printf("Goot\bd\tchance\n");
    // t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄을 바꿈(\n)
    printf("Cow\rW\a\n");
    //맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)
}