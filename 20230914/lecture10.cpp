 // 구구단 2 - 9단까지 출력
 // 5단은 출력하지 않는다.

#include <stdio.h>

int main() {
	
	int i, j;

	for (i = 2; i < 10; i++) {
		if (i == 5)
			continue;
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %d\n",i , j, i * j);
		}
	}

	return 0;
}