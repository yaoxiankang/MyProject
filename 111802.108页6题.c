#include<stdio.h>
void main() {
	int a;
	scanf("%d",&a);
	if (a < 1) {
		printf("%d\n", a);
	} else if (a >= 10) {
		printf("%d\n", 3 * a - 11);
	} else {
		printf("%d\n", 2 * a - 1);
	}
}
