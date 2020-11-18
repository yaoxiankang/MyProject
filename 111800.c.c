#include<stdio.h>
void main(){
	int a = 3, b = 4, c = 5, x, y;
	printf("%d\n",a + b > c && b == c);
	printf("%d\n",a || b + c && b - c);
	printf("%d\n",!(a > b) && !c || 1);
	printf("%d\n",!(x = a) && (y = b));
	printf("%d\n",!(a + b) + c - 1 && b + c / 2 );
}
