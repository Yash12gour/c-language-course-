#include<stdio.h>
float c2f(float c);

float c2f(float c){
  return((9*c)/5)+ 32;
}
int main(){
  float  c=54;
printf("the value of celcius to fahrenheit is %f to %.2f\n",c,c2f(c));
return 0;
}
