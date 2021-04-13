#include <stdio.h>

int main(void) {

	int A = 1;
	int B = 2;

	printf("주소값 전달 전: A = %d / B = %d\n\n", A, B);
	swap(&A, &B);
	printf("주소값 전달 후: A = %d / B = %d", A, B);

	return 0;
}

int swap(int* a, int* b) {

	int temp = *a;
	*a = *b;
	*b = temp;
}