#include <stdio.h>

int main(){
	int num;
	printf("Enter the num\n");
	scanf("%d", &num);
	if(num>0){
		if(num%2==0){
			printf("Its a even number and a positive number");
		}
		else{
			printf("Its a odd number and a positive number");
		}
	}
	else if(num==0){
		printf("Its zero");
	}
	else if(num<0){
		printf("Its a negative number");
	}
	return 0;
}
