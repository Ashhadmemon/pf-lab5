#include <stdio.h>

int main(){
	int age, income, credit;
	printf("Enter age:\n");
	scanf("%d", &age);
	if(age>=18 && age <60){
		printf("Enter income:\n");
	    scanf("%d", &income);
	    if(income>=100000 && income<=1000000){
	    	printf("Enter credit score:\n");
	        scanf("%d", &credit);
	        if(credit>=10){
	        	printf("you are eligible for loan");
			}else{
				printf("The credit score is low");
			}
		}else{
			printf("The income does not fit the criteria");
		}
	}else{
		printf("you are not eligible for loan");
	}
	return 0;
}
