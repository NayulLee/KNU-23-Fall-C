// ����Լ��� �̿��Ͽ� ���丮���� ����ϴ� �ڵ� �ۼ��ϱ�
#include <stdio.h>

int Factorial(int num);

int main() {
	
	int num;

	printf("���丮���� ����� ���� �Է� >> ");
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