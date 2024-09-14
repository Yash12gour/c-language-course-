#include <stdio.h>

int main(){
	
int a,b,c,d;
 printf("the value of a\n");
 scanf("%d",&a);
 
  printf("the value of b\n");
 scanf("%d",&b);
 
  printf("the value of c\n");
 scanf("%d",&c);
 
  printf("the value of d\n");
 scanf("%d",&d);
 
 if(a>b && a>c && a>d){
 	printf("the greatest no. is a ");
 }
 
 else if(b>a && b>c && b>d){
 	printf("the greatest no. is b ");
 }
 else if(c>b && c>a && c>d){
 	printf("the greatest no. is c ");
 }
  else if(d>b && d>c && d>a){
 	printf("the greatest no. is d ");
 }
  else{
  	printf("all numbers are equal");
  }
	return 0;
}
