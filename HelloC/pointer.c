#include <stdio.h>

int main(void) {

	int A = 1;
	int B = 2;

	printf("�ּҰ� ���� ��: A = %d / B = %d\n\n", A, B);
	swap(&A, &B);
	printf("�ּҰ� ���� ��: A = %d / B = %d", A, B);

	return 0;
}

int swap(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;
}