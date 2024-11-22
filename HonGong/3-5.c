#include <stdio.h>

int main(void)
{
    float ft = 1.23456789012345679;
    double db = 1.234567890123456789;

    printf("float typer varient's value : %.20f\n" , ft);
    printf("double type varient's value : %.20lf\n" ,db);
    //값이 다른 이유는 컴퓨터가 멍청해서 그렇다. 실수를 표현하는 방식이 오차를 갖고있는데,
    //float는 유효 숫자 7자리, double는 유효숫자 15자리인데 저장한 숫자는 그 수치를 한참넘었기때문에 다르다.
    //이를 방지하고자 꼭 써야만할때 실수형을 갈기고 실수형을 표현할때는 보통 자리수가 많으므로 double를 사용하는 습관을 가지자.
    //long double을 쓸수도있는데 이게 sizeof가 컴파일러마다 달라서 호환성이 보장이 안된다.
    return 0;
}