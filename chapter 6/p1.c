#include<stdio.h>
int main(){
 int i=2;
 int*j = &i;
printf("the address of i is %p\n", &i);
printf("the value of address is %d\n", *j);
return 0;
}
