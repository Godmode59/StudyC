#include <stdio.h>

int main(void)
{
    int a; // int형 변수 a 선언
    int b, c; // 2개의 int형 변수 b,c를 동시에 선언
    double da; // double형 변수 da 선언
    char ch; // char형 변수 ch 선언

    a = 10; //int형 변수 a에 정수 10 대입
    b = a; // int형 변수 b에 변수 a의 값 대입
    c = a + 20; // int형 변수 c에 변수 a의 값과 정수 20을 더한 값 대입
    da = 3.5; // double형 변수 da에 실수 3.5 대입
    ch = 'A'; // char형 변수에 문자 'A' 대입

    printf("a : %d\n", a);
    printf("b : %d\n", b);
    printf("c : %d\n", c);
    printf("da : %.1lf\n" , da);
    printf("ch : %c\n", ch);
    
    return 0;

}