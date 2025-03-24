/* 이 프로그램은 두 개의 정수를 더하고
	 그 결과를 출력한다. */

#include <stdio.h>

int main() {
	// 변수 선언
	int value1, value2, sum;
	
	// 값 할당 및 합 계산
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;

	// 결과 출력
	printf ("The sum of %i and %i is %i\n", value1, value2, sum);

	return 0;
}

