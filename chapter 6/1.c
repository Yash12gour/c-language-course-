#include<stdio.h>

int main(){
int i=72;
int* j=&i;  // j is the pointer which is pointing towards i and who will stores the i's address(in this program j is integer pointer as j we can also create pointer in float,char,void etc)
int k=67;
printf("the address of i is %p\n",&i);
printf("the address of i is %p\n",j);               //%u is for unsigned int and %p is for pointer
printf("the address of i is %p\n",k);


printf("the value on address k is %d\n", *(&k));
printf("the value on address j is %d\n", *(&i));
printf("the value on address j is %d\n", *j);


return 0;
    }
