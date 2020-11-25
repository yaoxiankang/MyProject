#include<stdio.h>
void main(){
	int a;
	scanf("%d", &a);
	if (a < 0 || a > 20000) { 
		printf("其他，输入有误，请重新输入。\n");
	} else if (a <= 100) {
		printf("贫困打工人\n");
	} else if (a <= 1000) {
		printf("一般打工人\n");
	} else {
		printf("土豪打工人。\n");
	}
}
