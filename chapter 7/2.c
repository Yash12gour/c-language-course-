#include<stdio.h>
int main(){

 int marks[5];
 printf("enter the marks of 5 bachua\n");

 for(int i=0;i<5;i++){

    scanf("%d", &marks[i]);
 }

 for(int i=0;i<5;i++){

    printf("marks obtained by student of %d is %d\n" ,i, marks[i]);
 }

return 0;
}
