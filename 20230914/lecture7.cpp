#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int grade; 

	printf("������ ���� ��� ��� ���α׷� �Դϴ�.\n");
	printf("������ �Է��ϼ���(1 ~ 100) >> ");
	scanf_s("%d", &grade);
	if (grade <= 100 && grade >= 0) {
		if (grade >= 90)
			printf("������ A�Դϴ�.\n");
		else if (grade >= 80)
			printf("������ B�Դϴ�.\n");
		else if (grade >= 70)
			printf("������ C�Դϴ�.\n");
		else if (grade >= 60)
			printf("������ D�Դϴ�.\n");
		else
			printf("������ F�Դϴ�.\n");
	}

	else
		printf("�߸��� �Է��Դϴ�.");
	
	return 0;
}