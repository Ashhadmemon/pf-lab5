#include <stdio.h>

int main(){
	int assignment, attendence, result, total;
	printf("Enter attendence\n");
	scanf("%d", &attendence);
	if(attendence>50){
	    printf("Enter assigment marks\n");
	    scanf("%d", &assignment);
	    printf("Enter exam results\n");
	    scanf("%d", &result);
	    total=assignment+result;
	    if(total<=33){
	    	printf("The grade is F");
		}else if(total>33 && total<=50){
			printf("The grade is D");
		}else if(total>50 && total<=60){
			printf("The grade is c");
		}else if(total>60 && total<=70){
			printf("The grade is B");
		}else if(total>70){
			printf("The grade is A");
		} 
    }else{
	printf("The attendence is not above the criteria");
}

}
