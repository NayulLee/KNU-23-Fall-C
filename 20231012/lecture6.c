#include <stdio.h>

void sort(int* intArr);

int main() {
	int intArr[5] = { 2, 3, 5, 1, 7 };

	for (int i = 0; i < 5; i++) {
		printf("%d\t", intArr[i]);
	}

	void sort(intArr);

	printf("\n");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", intArr[i]);
	}
}

void sort(int* intArr) {
	int temp;

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (*(intArr + i) > *(intArr + j)) {
					temp = *(intArr + i);
					*(intArr + i) = *(intArr + j);
					*(intArr + j) = temp;
			}
		}
	}
}