#include <stdio.h>
void swap (int*a,int*b);

void swap (int*a,int*b){
int temp = *a;
*a=*b;
*b= temp;
}

int main (){
    int a =5;int b=3;
    swap (&a,&b);
    printf("the value of a is %d\n", a);
    printf("the value of b is %d\n", b);

return 0;}
