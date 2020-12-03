#include<stdio.h>
void main()
{
	int h, m, s;
	printf("输入一个数:");
	scanf("%d", &s);
	h = s / 3600;
	m = s / 60;
	m = m > 60 ? m - h * 60 : m;
	s = s > 60 ? s - h * 3600 - m * 60 : s;
	printf("%d时 %d分 %d秒 ", h, m, s);
}
