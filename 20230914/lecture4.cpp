#include <stdio.h>

int main() {

	int a, b, c, val_1, val_2, val_3, val_4, val_5;
	a = 2, b = 0, c = 9;

	val_1 = a && b; // �����̹Ƿ� 0 ���
	val_2 = a || c; // ���̹Ƿ� 1 ���
	val_3 = (a > b) && (a < c); // �� �� ���̹Ƿ� 1 ���
	val_4 = !val_3; // 1�� �ƴ� 0 ���
	val_5 = b && c; // b�� �����̹Ƿ� 0 ���

	printf("val_1 = %d\n", val_1);
	printf("val_2 = %d\n", val_2);
	printf("val_3 = %d\n", val_3);
	printf("val_4 = %d\n", val_4);
	printf("val_5 = %d\n", val_5);

	return 0;
}