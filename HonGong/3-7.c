#include <stdio.h>
#include <string.h>

int main(void)
{
    char fruit[20] = "strawberry";

    printf("%s\n", fruit);
    strcpy(fruit, "banana"); //대입 연산자(=)를 사용할수없으므로 strcpy함수를 사용한다.
    printf("%s\n", fruit);
    
    return 0;
}