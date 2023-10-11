#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <windows.h> // Sleep 함수 

// iteration은 100000회 수행하며 1000회마다 진행상황 퍼센트로 표시하기

int main() {
	const char bar = '='; // 프로그레스바 문자
	const char blank = ' ';
	const int LEN = 20;
	const int MAX = 100000;
	const int SPEED = 50; 
	double x = 0;
	double y = 0;
	double circle = 0;
	int count = 0;
	int i;
	float tick = (float)100 / LEN; // tick : 몇%마다 프로그레스바 추가할지 계산
	int bar_count; // 프로그레스바 갯수 저장 변수
	int percent; //퍼센트 저장 변수
	while (count <= MAX) {
		x = (double)rand() / (double)RAND_MAX;
		y = (double)rand() / (double)RAND_MAX;
		if ((x * x) + (y * y) < +1) {
			circle++;
		}
		percent = (float)count / MAX * 100;
		printf("%d%% 진행중... 원주율 : %0.15f [", percent, (circle / count) * 4);
		
		bar_count = percent / tick; // 프로그레스바 갯수 계산
		for (i = 0; i < LEN; i++) {
			if (bar_count > i) { // 프로그레스바 길이보다 i가 작으면
				printf("%c", bar);
			}
			else {
				printf("%c", blank);
			}
		}
		printf("]\n"); // 퍼센트 출력  
		count++; // 카운트 1증가  
		Sleep(SPEED); // SPEEDms 대기 
	}
	printf(" done!\n\n");
	system("pause"); // 프로그램 종료 전 일시정지  
	return 0;
}