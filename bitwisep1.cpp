#include<stdio.h>

int main(){
	int a, b;
	printf("Enter a\n");
	scanf("%d", &a);
	printf("Enter b\n");
	scanf("%d", &b);
	
	a=a^b;
	b=a^b;
	a=b^a;
	printf("a =%2d\n", a);
	printf("b =%2d\n", b);
	return 0;
}
