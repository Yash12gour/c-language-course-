#include <stdio.h>

int main(){
	
	int a =45;
	
	if(a>=18){
		printf("you are eligible for driving\n");
	}
	
	else if(a>45){
		printf("you are eligible for driving and you are an old man\n");
	}
	
	else if(a>=45){
		printf("you are eligible for driving so your are an adlut\n");
	}
		else{
		printf("you are not eligible for driving\n");
	}
	
	
	return 0;
}
