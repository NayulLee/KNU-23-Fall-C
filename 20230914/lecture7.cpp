#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int grade; 

	printf("점수에 따른 등급 출력 프로그램 입니다.\n");
	printf("점수를 입력하세요(1 ~ 100) >> ");
	scanf_s("%d", &grade);
	if (grade <= 100 && grade >= 0) {
		if (grade >= 90)
			printf("학점은 A입니다.\n");
		else if (grade >= 80)
			printf("학점은 B입니다.\n");
		else if (grade >= 70)
			printf("학점은 C입니다.\n");
		else if (grade >= 60)
			printf("학점은 D입니다.\n");
		else
			printf("학점은 F입니다.\n");
	}

	else
		printf("잘못된 입력입니다.");
	
	return 0;
}