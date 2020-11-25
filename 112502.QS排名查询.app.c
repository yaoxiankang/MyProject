#include<stdio.h>
void main(){
	int a;
	scanf("%d", &a);
	switch(a) {
		case 1: {
			printf("麻省理工学院/n");
			break;
		}
		case 2: {
			printf("斯坦福大学/n");
			break;
		}
		case 3: {
			printf("哈佛大学/n");
			break;
		}
		case 4: {
			printf("牛津大学/n");
			break;
		}
		case 5: {
			printf("加州理工学院/n");
			break;
		}
		case 6: {
			printf("苏黎世联邦理工大学/n");
			break;
		}
		case 7: {
			printf("剑桥大学/n");
			break;
		}
		case 8: {
			printf("伦敦大学学院/n");
			break;
		}
		case 9: {
			printf("帝国理工学院/n");
			break;
		}
		case 10: {
			printf("芝加哥大学/n");
			break;
		}
		default : {
			printf("老铁的排名太靠后了，请输入1-10/n");
			break;
		}
	}
}
