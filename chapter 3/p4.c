#include <stdio.h>

int main(){
	
	char ch;
	printf("enter character:");
	scanf("%c", &ch);
	printf("the value of character is %d\n",ch);
	
	if(ch>=97 && ch<=122){
		printf("this is lower case character \n");
	
	}
	else{
		printf("this is not lower case character \n");
	}
	return 0;
}
