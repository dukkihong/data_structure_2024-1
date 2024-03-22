#include <stdio.h>

int main() {
	char* arr1[4] = { "Korea","Seoul","Mapo","152번지 2/3" };
	for (int i = 0; i < sizeof(arr1) / 8; i++) {
		printf("%s\n", arr1[i]);
	}
	printf("\n");
	char* arr2[4] = { "Korea","Seoul","Jongno","152번지 2/3" };
	for (int i = 0; i < sizeof(arr2) / 8; i++) {
		printf("%s\n", arr2[i]);
	}
	return 0;
}
