#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;

	printf("[윤년 계산기]\n");
	printf("연도를 입력하세요 >> ");
	scanf_s("%d", &num);

	if ((num % 4 == 0) && (num % 100 != 0) && (num % 400 == 0)) 
		printf("윤년입니다");
	else
		printf("윤년이 아닙니다.");

	return 0;
}