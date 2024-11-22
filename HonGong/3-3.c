#include <stdio.h>

int main(void)
{
    short sh = 32767; // short형의 최대값 초기화
    int in = 2147483647; // int형의 최대값 초기화
    long ln = 2147483647; // long형의 최대값 초기화
    long long lln = 12345678912345;  //아주 큰 값 최대값 초기화

    printf("short varient : %d\n", sh);
    printf("int varient : %d\n", in);
    printf("long type varient : %d\n",ln);
    printf("long long type varient : %lld\n", lln); // longlong형은 lld로 출력한다.
    printf("long longtype's size : %dbyte\n", sizeof(unsigned long long));
    return 0;
}