#include <stdio.h>
int main(){
	int num1, num2;
	printf("Enter first number\n");
	scanf("%d", &num1);
	printf("Enter second number\n");
	scanf("%d", &num2);
	
	(num1 > num2) ? printf("The max num is %d", num1): printf("The max num is %d", num2);
	return 0;
}
