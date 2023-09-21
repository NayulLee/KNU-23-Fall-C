#include <stdio.h>

int main() {

	int a, b, c, val_1, val_2, val_3, val_4, val_5;
	a = 2, b = 0, c = 9;

	val_1 = a && b; // 거짓이므로 0 출력
	val_2 = a || c; // 참이므로 1 출력
	val_3 = (a > b) && (a < c); // 둘 다 참이므로 1 출력
	val_4 = !val_3; // 1이 아닌 0 출력
	val_5 = b && c; // b가 거짓이므로 0 출력

	printf("val_1 = %d\n", val_1);
	printf("val_2 = %d\n", val_2);
	printf("val_3 = %d\n", val_3);
	printf("val_4 = %d\n", val_4);
	printf("val_5 = %d\n", val_5);

	return 0;
}