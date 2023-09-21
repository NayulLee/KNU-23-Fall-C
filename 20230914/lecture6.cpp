#include <stdio.h>

int main() {

	int input_num;

	// 정수를 입력받고 양의정수면 양의정수라고 출력 음의정수면 음의정수라고 출력, 0이면 0이라고 출력

	printf("정수 입력 >> ");
	scanf_s("%d", &input_num);

	if (input_num > 0)
		printf("입력하신 %d는 양의 정수입니다.",input_num);
	else if (input_num < 0)
		printf("입력하신 %d는 음의 정수입니다.",input_num);
	else
		printf("0입니다.");

	return 0;
}