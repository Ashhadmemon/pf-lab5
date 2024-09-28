#include <stdio.h>

int main(){
	int age;
	char citizen;
	printf("Enter your age\n");
	scanf("%d", &age);
    printf("Enter your citizenship(Y\\N)\n");
	scanf("%s", &citizen);
    if(age<=18 && (citizen == 'y'|| citizen == 'Y')){
    	printf("You are eligible to vote");
	}
	else{
		printf("you are not eligible to vote");
	}
	return 0;
}
