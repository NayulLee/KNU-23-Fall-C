// ���� �����
#include <stdio.h>

int calculator(int sel);
int sum(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main() {
	int sel;

	printf("1. ���ϱ�  2. ����  3. ���ϱ�  4. ������ : ");
	scanf_s("%d", &sel);

	printf("��� ����� %d\n", calculator(sel));
	return 0;
}

int calculator(int sel) {

	int num1;
	int num2;
	int result;

	printf("���� 1�� �Է��Ͻÿ� >> ");
	scanf_s("%d", &num1);

	printf("���� 2�� �Է��Ͻÿ� >> ");
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
