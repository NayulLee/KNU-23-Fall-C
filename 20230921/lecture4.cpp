// 반복문/조건문 실습 : 몬테 - 카를로 알고리즘
#define MAX_COUNT 1000
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/* int main() {
    int i = 0;
    double x = 0;
    double y = 0;
    double circle = 0;
    double count = 0;

    srand((double)time(NULL));

    while (1) {
        for (i = 0; i < 1000000; i++) {
            x = (double)rand() / (double)RAND_MAX;
            y = (double)rand() / (double)RAND_MAX;
            count++;
            
            if ((x * x) + (y * y) <= 1) {

                circle++;
            }
        }
        printf("n = %0.0f, pi = %0.15f\n", count, (circle / count) * 4);
    }
} */

int main() {

    int i;
    double x = 0;
    double y = 0;
    double progress = 0;
    double InCircle = 0;

    srand(time(NULL));

    while (1) {
        for (i = 0; i < MAX_COUNT; i++) {
            x = (double)rand() / (double)RAND_MAX;
            y = (double)rand() / (double)RAND_MAX;
            progress++;

            if ((x * x) + (y * y) <= 1) {
                InCircle++;
            }
        }
        printf("%d진행.. 원주율 : %0.15f\n", (progress / MAX_COUNT) * 100, (InCircle / progress) * 4);
    }
}