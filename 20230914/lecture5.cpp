#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int num;

	printf("[���� ����]\n");
	printf("������ �Է��ϼ��� >> ");
	scanf_s("%d", &num);

	if ((num % 4 == 0) && (num % 100 != 0) && (num % 400 == 0)) 
		printf("�����Դϴ�");
	else
		printf("������ �ƴմϴ�.");

	return 0;
}