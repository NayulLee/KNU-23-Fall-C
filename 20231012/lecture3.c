#include <stdio.h>

int main() {
	int arr[3] = { 0, 1, 2 };

	printf("배열의 이름 : %p\n", arr); // arr는 그 자체로 포인터다. (배열의 이름 = 배열의 주소)
	printf("첫 번째 요소 : %p\n", &arr[0]);
	printf("두 번째 요소 : %p\n", &arr[1]);
	printf("세 번째 요소 : %p\n", &arr[2]);


	// 주소값이 4씩 차이나는 이유는 int포인터의 단위가 4바이트기 때문
	return 0;
}