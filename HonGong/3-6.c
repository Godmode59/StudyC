#include <stdio.h>

int main(void)
{
    char fruit[20] = "strawberry"; // char 배열 선언과 문자열 초기화
    //쓸 문자열보다 한칸 더많이 만들어야한다. '\0' 널문자가 포함되어있어 이것이 문자열을 끝내기 때문이다.

    printf("ddalgi : %s\n", fruit); //베열명으로 저장된 문자열 출력
    printf("ddalgi jam : %s %s\n", fruit, "jam"); // 문자열 상수를 직접 %s로 출력

    //fruit = "banana"; //배열은 = 왼쪽에 올수없다. 변수가 아니라 주소 상수이기 때문이고, 자료형의 크기가 일정치 않기 떄문이다.

    return 0;
}