 /*
 <<실습 1>> 변수 2개의 값을 바꾸는 함수 swap()을 구현
 main() : 정수 변수 2개를 선언 및 임의의 값으로 초기화, swap()함수 호출 전/후로 변수의 값을 출력
 swap() : 정수 변수 2개를 입력으로 받아, 두 변수의 값을 서로 바꾸는 기능. void형 함수, call-by-reference 형태로 구현
 */
#include <stdio.h>

void swap(int* num1, int* num2);

int main() {

	int num1 = 10, num2 = 20;
	printf("num1 = %d, num2 = %d \n", num1, num2);

	swap(&num1, &num2);
	printf("num1 = %d, num2 = %d \n", num1, num2);

	return 0;
}
void swap(int* num1, int* num2) {
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}