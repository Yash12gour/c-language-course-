#include<stdio.h>
// function prototype

int sum(int, int);

//function defination
int sum(int x,int y){
printf("the sum is %d\n", x+y);    // we can write function whether  after int main or before int main it works similarly
return x+y;

}
int main (){

    int a=3, b=4;
//    int c1= a+b;
//
//    printf("the value of c1 is %d\n", c1);
    int c1 =sum(a,b); // function call
    printf("%d\n",c1);

    int c=8,d=9;
//   int c2= c+d;
//    printf("the value of c2 is %d\n", c2);
int c2=sum(c,d); // function call
 printf("%d\n",c2);


    int a2=5,b2=7;
//     int c3= a2+b2;
//    printf("the value of c3 is %d\n", c3);
int c3 =sum(a2,b2);// function call
 printf("%d\n",c3);



return 0;
}
