// 재귀함수를 이용하여 팩토리얼을 계산하는 코드 작성하기
#include <stdio.h>

int Factorial(int num);

int main() {
	
	int num;

	printf("팩토리얼을 계산할 정수 입력 >> ");
	scanf_s("%d", &num);

	printf("%d", Factorial(num));
	return 0;
}

int Factorial(int num) {

	int result = 1;

	if (num > 0) {
		result = num * Factorial(num - 1);
	}

	return result;
}