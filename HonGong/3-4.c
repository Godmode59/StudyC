#include <stdio.h>

int main(void)
{
    unsigned int a;

    a = 4294967295; // 큰 양수 저장
    printf("%d\n", a); // %d로 출력
    a= -1; // 음수 저장
    printf("%u\n", a); // %u로 출력
    
    //음수는 메모리에 보수, 즉 반대로 저장되는데 이떄 -1의 수가 부호를 무시할시 4294967295
    //로 보여지므로 이떄 unsigned를 쓰고 %u로 출력시 부호비트를 무시해서 잘못된 값이 출력됨.

    return 0;
}