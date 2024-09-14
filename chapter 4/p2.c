#include<stdio.h>
int main (){

    int n=10;

    for(int i=n;i<=n;i--){
            if(i==0){
                break;
            }

        printf("%d x %d =%d\n",n,i,n*i);
    }

return 0;
}
