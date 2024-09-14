#include<stdio.h>

int factorial(int n){
if(n ==1 || n==0){
    return 1;

}
 return factorial(n-1)*n;
 }

int main(){
int a =11;

printf("the factorial of a is %d\n", factorial(a));
return 0;
}
