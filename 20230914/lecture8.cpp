#include <stdio.h>
#include <stdlib.h>

int main() {

	int score, num;

	printf("������ �Է��� �ּ���(1 ~ 100) >> ");
	scanf_s("%d", &score);

	if (score < 0 || score > 100) {
		printf("�߸��� �Է��Դϴ�.");
		return 0;
	}

	else
		num = score / 10;
	switch (num) {
	case(10): // 100 ~ 90 ������ ������ A�����̱� ������ case���� �ݺ��ؼ� �� �ʿ� ���� case(10)�� ���๮�� ��ĭ���� �д�. case(10) ���� �� case(9)�� break������ ����ȴ�.
	case(9):
		printf("������ A");
		break;
	case(8):
		printf("������ B");
		break;
	case(7):
		printf("������ C");
		break;
	case(6):
		printf("������ D");
		break;
	default:
		printf("������F");
	}

	return 0;

}