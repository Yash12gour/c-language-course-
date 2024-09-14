#include <stdio.h>
int main(){
    int N1,N2,N3;
    scanf("%d %d %d",&N1,&N2,&N3);
int arr[3][10];
int mul[]={N1,N2,N3};

for(int i=0 ;i<3;i++){

    for(int j=0 ;j<10;j++){

    arr[i][j] = mul[i]* (j+1);
}
}
for(int i=0 ;i<3;i++){

    for(int j=0 ;j<10;j++){

    printf("the value at arr[i][j]is %d\n", arr[i][j]);
}
printf("\n");
}
return 0;
}
