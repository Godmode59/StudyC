#include <stdio.h>

int main(void)
{
    char grade; //학점을 입력하는 변수(배열 선언 안하는 이유는 ABCDEF같은 한글자라)
    char name[20]; // 이름을 입력하는 배열

    printf("학점 입력 : ");
    scanf("%c", &grade); //grade 변수에 학점 문자 입력
    printf("이름 입력 : ");
    scanf("%s", name); // name 배열에 이름 문자열 입력, &를 사용하지않음.
    printf("%s의 학점은 %c입니다.\n", name, grade);
    //scanf 배열 사용 주의점. 한글은 한 자당 2바이트를 차지하는데 20바이트를 선언했으므로 널문자 까지 포함할때 쓸수 있는 글자는 9글자다.
    
    return 0;

}