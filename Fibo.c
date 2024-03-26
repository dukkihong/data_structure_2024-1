#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <stdio.h>

int Fibo(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n < -1) {
		return 1;
	}
	return Fibo(n - 1) + Fibo(n - 2);
}

int main() {
	int n;
	int i;

	printf("�� �� °���� �Ǻ���ġ ������ ���ұ��? ");
	scanf_s("%d", &n);

	for (i = 0; i < n; i++) {
		printf("%d�� ° �� ", i);
		printf("%d\n", Fibo(i));
	}
	return 0;
}