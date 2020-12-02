#include<stdio.h>
void main(){
	char a;
	printf("输大写的wsad\n");
	scanf("%c", &a);
	switch(a) {
		case 'W': {
			printf("你W了\n");
			break;
		}
		case 'S': {
			printf("你S了\n");
			break;
		}
		case 'A': {
			printf("你A了\n");
			break;
		}
		case 'D': {
			printf("你D了\n");
			break;
		}
		default : {
			printf("你没有WSAD\n");
			break;
		}
	}
}
