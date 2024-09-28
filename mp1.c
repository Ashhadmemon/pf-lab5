#include <stdio.h>

int main(){
	int a, b, c;
	printf("Enter first number\n");
	scanf("%d", &a);
	printf("Enter second number\n");
	scanf("%d", &b);
	printf("Enter second number\n");
	scanf("%d", &c);
	if(a>b && b>c){
		printf("The greatest num is %d", a);
	}else if(b>a && a>c){
		printf("The greatest num is %d", b);
	}else if(c>a && a>b){
		printf("The greatest num is %d", c);
	}
	return 0;
}
