#include <stdio.h>

int main() {
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; i < j; j++) {
			printf("    ");
		}
		if (i % 2 == 0)
			printf("| O |");
		else
			printf("| X |");
		printf("\n------------------\n");

	}
	return 0;
}