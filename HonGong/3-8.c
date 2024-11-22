#include <stdio.h>

int main(void)
{
    int income = 0;
    double tax;
    const double tax_rate = 0.12; 
    //const는 선언과 동시에 초기화를 시켜줘야하며 그렇지 않을시 덤프값이 들어가 바뀌지않는다.

    income = 100;
    tax = income * tax_rate;
    printf("tax : %.1lf\n", tax);

    return 0;

}