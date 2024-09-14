#include <stdio.h>

int main (){
	
	int marks1,marks2,marks3;
	
	printf("marks in sub 1\n");
	scanf("%d", &marks1);
	
	printf("marks in sub 2\n");
	scanf("%d", &marks2);
		
	printf("marks in sub 3\n");
	scanf("%d", &marks3);
    	printf("marks in each subject %d %d and %d\n",  marks1,marks2,marks3);
	
	if(marks1<33 || marks2<33 || marks3<33){
		printf("you are failed due to less score in respective subject\n");
	
	}
	else if((marks1 + marks2 + marks3)/3<40){
		printf("you are failed due to total less score in examination\n");
	
	}
		else{
		printf("you have passed ");
	
	}
	return 0;
}

