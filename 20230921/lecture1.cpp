// �Է¹��� ���� �Ҽ����� �ƴ��� �Ǵ��ϱ�
#include <stdio.h>

/* int main() {
	
	int num, result;
	printf("���� ���� �Է��ϼ��� >> ");
	scanf_s("%d\n", &num);

	 result = Prime_Number(num);

	 if(result = )
	return 0;
}

int Prime_Number(int num) {
	
	int i = 0, result = 0;
	
	while (i <= num) {
		if (num % i == 0)
			result += 1;
		return result;
	}
} */

int isPrime(int num) {
	for (int div = num - 1; div > 1; div--) {
		if (num % div == 0) return 0;
	}
	return 1;
}

int main() {

	int num;
	scanf_s("%d", &num);

	printf("%d\n", isPrime(num));
	return 0;
}