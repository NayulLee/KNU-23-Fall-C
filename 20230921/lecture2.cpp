// 계산기 만들기
#include <stdio.h>

int calculator(int sel);
int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main() {
	int sel;

	printf("1. 더하기  2. 빼기  3. 곱하기  4. 나누기 : ");
	scanf_s("%d", &sel);

	printf("계산 결과는 %d\n", calculator(sel));
	return 0;
}

int calculator(int sel) {

	int num1;
	int num2;
	int result;

	printf("숫자 1을 입력하시오 >> ");
	scanf_s("%d", &num1);

	printf("숫자 2를 입력하시오 >> ");
	scanf_s("%d", &num2);

	if (sel == 1) result = sum(num1, num2);
	else if (sel == 2) result = sub(num1, num2);
	else if (sel == 3) result = mul(num1, num2);
	else if (sel == 4) result = div(num1, num2);

	return result;
}

int sum(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int div(int num1, int num2) {
	return num1 / num2;
}
