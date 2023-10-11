// 몬테 카를로 알고리즘을 구현하라.
// iteration은 10만회 수행하며 1000회마다 계산된 원주율과 진행 상황을 표시할 것
// 코드 실행 결과 계산된 원주율 값도 같이 기재할 것

#define MAX_COUNT 100000 //
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int i = 0;
	double x = 0;
	double y = 0;
	double circle = 0;
	double count = 0;

	srand((double)time(NULL));

	while (1) {
		for (i = 0; i < MAX_COUNT; i++) // 시행 횟수 100만회
		{
			x = (double)rand() / (double)RAND_MAX;
			y = (double)rand() / (double)RAND_MAX;
			count++;
			if ((x * x) + (y * y) < +1) {
				circle++;
			}
		}
		
		printf("n = %0.0f, pi = %0.15f\n", count, (circle / count) * 4);
	}

	return 0;
}