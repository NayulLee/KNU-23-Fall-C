#define MAX_COUNT 100000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
	
	double x = 0;
	double y = 0;

	int cnt_in_circle = 0;

	srand(time(NULL));

	for (int i = 1; i <= MAX_COUNT; i++) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if (sqrt(x * x + y * y) < 1.0) {
			cnt_in_circle++;
		}
		double pi = 4.0 * (double)cnt_in_circle / (double)i;

		if (i % MAX_COUNT == 0) {
			int percent = i / MAX_COUNT * 100;
			printf("%d%% 진행 ... 원주율 : %lf", percent, pi);

			for (int j = 0; j < percent / 5; j++) {
				printf("■");
			}
			for (int j = 0; j < 20 - percent / 5; j++) {
				printf("□");
			}
		}

	}
}