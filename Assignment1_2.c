#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char sen[50];
	int len;

	printf("문자열을 입력하세요 : ");
	scanf("%s", sen);
	printf("\n");

	len = strlen(sen);

	printf("입력된 문자열은\n\"%s\"\n입니다.\n\n", sen);
	printf("입력된 문자열의 길이=%d", len);


	return 0;
}