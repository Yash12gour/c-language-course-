#include<stdio.h>
int returning_5(int*j){
    printf("the address of j is %d" ,j);
    return 5;
}
int main(){
     int i=2;
 int*j = &i;
printf("the address of i is %u\n", &i);
returning_5(j);
return 0;
}
