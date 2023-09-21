#include <stdio.h>
#include <stdlib.h>

int main() {

	int score, num;

	printf("점수를 입력해 주세요(1 ~ 100) >> ");
	scanf_s("%d", &score);

	if (score < 0 || score > 100) {
		printf("잘못된 입력입니다.");
		return 0;
	}

	else
		num = score / 10;
	switch (num) {
	case(10): // 100 ~ 90 까지는 동일한 A학점이기 때문에 case문을 반복해서 쓸 필요 없이 case(10)의 실행문은 빈칸으로 둔다. case(10) 실행 시 case(9)의 break문까지 실행된다.
	case(9):
		printf("학점은 A");
		break;
	case(8):
		printf("학점은 B");
		break;
	case(7):
		printf("학점은 C");
		break;
	case(6):
		printf("학점은 D");
		break;
	default:
		printf("학점은F");
	}

	return 0;

}