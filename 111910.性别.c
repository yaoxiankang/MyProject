#include<stdio.h>
void main () {
	int temp = 0;
	scanf("%d", &temp);
	if (temp == 0) {
		printf("女\n");
	} else if (temp == 1) {
		printf("男\n");
	}
}
