#include<stdio.h>
int main(){
int marks[]={12,32,34,45};
int *ptr = &marks[0];  // it is same as int *ptr =marks;

for(int i =0;i<4;i++){

    printf(" the marks at index %d is %d\n", i , *ptr);
    ptr++;
}

return 0;
}
