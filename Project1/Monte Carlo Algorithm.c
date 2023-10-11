// ���� ī���� �˰��� �����ϱ�
#define MAX_COUNT 1000000
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
		for (i = 0; i < MAX_COUNT; i++) // ���� Ƚ�� 100��ȸ
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