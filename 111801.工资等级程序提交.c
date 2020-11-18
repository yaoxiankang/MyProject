#include<stdio.h>
void main(){
	int a = 3, b = 4, c = 5, x, y;
	scanf("%d", &a);
	if (a < 0) { 
		printf("你还有花呗没还，无法使用该程序。\n");
	} else if (a <= 500) {
		printf("赤贫\n");
	} else if (a <= 1500) {
		printf("贫困\n");
	} else if (a <= 3000) {
		printf("普通打工人。\n");
	} else if (a <= 5000) {
		printf("普通清洁工。\n");
	} else if (a <= 12000) {
		printf("水电工工资。\n");
	} else if (a <= 50000) {
		printf("脑袋大脖子粗不是老板就是伙夫。\n");
	} else if (a <= 200000000){
		printf("程序员。\n");
	}
}
