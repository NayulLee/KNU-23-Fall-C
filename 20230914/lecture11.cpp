#include <stdio.h>

int main() {

	int a = 1;
	
	while (a <= 10)
	{
		printf("%d��° ���\n", a);
		a++;
	}

	
	int i, j;
	i = 2;
	j = 1;

	while (i <= 9) {
		if (i == 5) {
			i++;
			continue;
		}
		while (j <= 9) {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		}
		i++;
		j = 1;
	}
	return 0;
} 