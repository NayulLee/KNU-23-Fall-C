// 반복문/조건문 실습 : 몬테 - 카를로 알고리즘
#define MAX_COUNT 1000000000 // 시행 횟수 10억회
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main() {

    double i = 0;
    int count;
    double InCircle = 0;
    double x, y;

    for (count = 0; count < MAX_COUNT; count++) {
        x = (double)rand() / (double)RAND_MAX;
        y = (double)rand() / (double)RAND_MAX;
        i++;
        if ((x * x) + (y * y) <= 1) { // 점의 좌표가 원 내부에 존재할 경우
            InCircle++;
        }

        printf("%.2f%%진행.. 원주율 : %0.15f\n", (i / MAX_COUNT) * 100, (InCircle / count) * 4);
    }

    return 0;
}