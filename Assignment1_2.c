#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char sen[50];
	int len;

	printf("���ڿ��� �Է��ϼ��� : ");
	scanf("%s", sen);
	printf("\n");

	len = strlen(sen);

	printf("�Էµ� ���ڿ���\n\"%s\"\n�Դϴ�.\n\n", sen);
	printf("�Էµ� ���ڿ��� ����=%d", len);


	return 0;
}