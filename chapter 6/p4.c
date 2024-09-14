#include<stdio.h>
int*  sum(int a, int b){
int s= a+b;
int* pointer = &s;
printf("the sum is %d\n",s);
return pointer ;
}
float*  average(int a, int b){
    float avg = (a+b)/2.0;
    float* pointer = &avg;
printf("the average is %f\n",avg);
return pointer;
}
int main(){
int x=2,y=4;
int* poniter;
float* pointer;

pointer =sum(x,y);
pointer =average(x,y);

printf("the address of sum is %u and average is %u", pointer,pointer);

return 0;
}

