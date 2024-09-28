#include <stdio.h>

int main(){
	int age;
	printf("Enter the age of a person\n");
	scanf("%d", &age);
	if(age<=12){
		printf("congratulations you are a child");
	}
    else if(age>12 && age<=20){
		printf("congratulations you are a teeenager");
	}
	else if(age>20 && age<=60){
		printf("congratulations you are a adult");
	}
	else if(age>60){
		printf("congratulations you are a senior citizen");
	}
	return 0;
}
