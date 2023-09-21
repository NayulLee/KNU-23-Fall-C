// 입력받은 수가 소수인지 아닌지 판단하기
#include <stdio.h>

/* int main() {
	
	int num, result;
	printf("정수 값을 입력하세요 >> ");
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