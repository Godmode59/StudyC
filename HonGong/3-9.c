#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a); //scanf가 vscode Code Runner에서 동작하지 않는 문제 수정. Code Runner 우클하고 확장설정 들어가서 run terminal 이거 작업 영역탭가서까지 두개 켜주면 잘되는듯 하다.
    printf("typed value : %d\n", a); //

    return 0;
}