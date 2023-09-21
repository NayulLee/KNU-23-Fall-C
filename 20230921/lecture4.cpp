// �ݺ���/���ǹ� �ǽ� : ���� - ī���� �˰���
#define MAX_COUNT 1000000000 // ���� Ƚ�� 10��ȸ
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
        if ((x * x) + (y * y) <= 1) { // ���� ��ǥ�� �� ���ο� ������ ���
            InCircle++;
        }

        printf("%.2f%%����.. ������ : %0.15f\n", (i / MAX_COUNT) * 100, (InCircle / count) * 4);
    }

    return 0;
}