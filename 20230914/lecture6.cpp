#include <stdio.h>

int main() {

	int input_num;

	// ������ �Է¹ް� ���������� ����������� ��� ���������� ����������� ���, 0�̸� 0�̶�� ���

	printf("���� �Է� >> ");
	scanf_s("%d", &input_num);

	if (input_num > 0)
		printf("�Է��Ͻ� %d�� ���� �����Դϴ�.",input_num);
	else if (input_num < 0)
		printf("�Է��Ͻ� %d�� ���� �����Դϴ�.",input_num);
	else
		printf("0�Դϴ�.");

	return 0;
}