#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <windows.h> // Sleep �Լ� 

// iteration�� 100000ȸ �����ϸ� 1000ȸ���� �����Ȳ �ۼ�Ʈ�� ǥ���ϱ�

int main() {
	const char bar = '='; // ���α׷����� ����
	const char blank = ' ';
	const int LEN = 20;
	const int MAX = 100000;
	const int SPEED = 50; 
	double x = 0;
	double y = 0;
	double circle = 0;
	int count = 0;
	int i;
	float tick = (float)100 / LEN; // tick : ��%���� ���α׷����� �߰����� ���
	int bar_count; // ���α׷����� ���� ���� ����
	int percent; //�ۼ�Ʈ ���� ����
	while (count <= MAX) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if ((x * x) + (y * y) < +1) {
			circle++;
		}
		percent = (float)count / MAX * 100;
		printf("%d%% ������... ������ : %0.15f [", percent, (circle / count) * 4);
		
		bar_count = percent / tick; // ���α׷����� ���� ���
		for (i = 0; i < LEN; i++) {
			if (bar_count > i) { // ���α׷����� ���̺��� i�� ������
				printf("%c", bar);
			}
			else {
				printf("%c", blank);
			}
		}
		printf("]\n"); // �ۼ�Ʈ ���  
		count++; // ī��Ʈ 1����  
		Sleep(SPEED); // SPEEDms ��� 
	}
	printf(" done!\n\n");
	system("pause"); // ���α׷� ���� �� �Ͻ�����  
	return 0;
}