#include <stdio.h>

int main() {
	int arr[3] = { 0, 1, 2 };

	printf("�迭�� �̸� : %p\n", arr); // arr�� �� ��ü�� �����ʹ�. (�迭�� �̸� = �迭�� �ּ�)
	printf("ù ��° ��� : %p\n", &arr[0]);
	printf("�� ��° ��� : %p\n", &arr[1]);
	printf("�� ��° ��� : %p\n", &arr[2]);


	// �ּҰ��� 4�� ���̳��� ������ int�������� ������ 4����Ʈ�� ����
	return 0;
}