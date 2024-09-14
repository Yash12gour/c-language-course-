#include<stdio.h>
float average(int a ,int b, int c);

float average(int a ,int b, int c){
return (a+b+c)/3.01;

}
int main(){
int x,y,z;

printf(" the value of x\n");
scanf("%d",&x);
printf(" the value of y\n");
scanf("%d",&y);
printf(" the value of z\n");
scanf("%d",&z);
printf("the average is %f", average (x,y,z));
return 0;
}
