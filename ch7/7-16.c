// compare static value and automatic value

#include <stdio.h>

/**
    *@brief 인자 없이 기본으로 설정된 두 변수를 이용해 정적과 자동 변수의 차이를 보여주는 함수
    *@return 따로 리턴은 없고 함수를 반복하면 매번 다른 값이 출력됨
    *\see 이건 연습을 위해 작성하는 주석임
    *\param a 그냥 넣은 정수 하나
    *\param st 그냥 넣은 문자
    */
void auto_static (void) {
    int autoVar = 1;
    static int staticVar = 1;

    printf ("automatic = %i, static = %i\n", autoVar, staticVar);

    autoVar++;
    staticVar++;
}

int main (void) {
    int i;
    void auto_static (void);

    for ( i = 0 ; i < 5 ; i++ ) {
        auto_static();
    }
    
    return 0;
}
