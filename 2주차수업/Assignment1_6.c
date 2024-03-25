#include <stdio.h>

void hanoi(int num, char from, char temp, char to) {
	if (num == 1) {
		printf("%c에서 원반 %d를(을) %c로 옮김\n", from, num, to);
	}
	else {
		hanoi(num - 1, from, to, temp);
		printf("%c에서 원반 %d를(을) %c로 옮김\n", from,num,to);
		hanoi(num - 1, temp, from, to);
	}
}

int main() {
	hanoi(3, 'A', 'B', 'C');
	return 0;
}