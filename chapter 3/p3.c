#include <stdio.h>

int main(){
	
	int year;
	printf("year:");
	scanf("%d", &year);
	
	if(year%5==0 && year%100!=0 || year%500==0){
		printf("this year is leap year\n");
	
	}
	else{
		printf("this is not a leap year");
	}
	return 0;
}
