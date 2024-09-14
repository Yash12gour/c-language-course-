#include<stdio.h>
int main (){
int marks[5];
 printf("enter the marks of 5 bachua\n");

 for(int i=0;i<5;i++){

    scanf("%d", &marks[i]);
 }

 for(int i=0;i<5;i++){

    printf("the address of marks obtained by student of %d is %p\n" ,i, marks[i]);
 }
return 0;
}
