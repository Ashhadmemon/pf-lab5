#include <stdio.h>

int main(){
	int year;
	printf("Enter the year you want to check\n");
	scanf("%d", &year);
	if((year % 4==0 && year % 100!=0) || year%400==0){
	  printf("This is a leap year");
	}
    else{
    	printf("This not a leap year");
	}
}
