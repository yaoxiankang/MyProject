#include<stdio.h>
#include<windows.h>
void main() {
	int a[20][10];
	int i = 0;
	int j = 0;
	for(i = 0; i < 20; i++) {
		for(j = 0; j < 10; j++) {
			a[i][j] = 999;
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
	Sleep(5000);
	for(i = 0; i < 20; i++) {
		for(j = 0; j < 10; j++) {
			a[i][j] = 0;
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
}	


///////
