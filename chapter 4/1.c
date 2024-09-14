#include <stdio.h>

int main(){
//	while loop
	int i = 0;

	while(i<=100){
		printf("i am okay %d \n",i);
		i++;   // if we remove increment or decrement operator we can get infinite loop
	}

	return 0;
}

