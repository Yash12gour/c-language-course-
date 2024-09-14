#include<stdio.h>
void change_to_tentimes(int*);

void change_to_tentimes(int*a){
    *a=*a *10;
       }

int main (){
    int x=5;
    printf("the value of x  is %d\n", x);
    change_to_tentimes(&x);
    printf("the value of x at 10th time is %d\n", x);
return 0;;
}
