#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Code";
    char t[50];
    strcpy(t, s);
    printf("Source string = %s\n", s);
    printf("Target string = %s", t);
}
// it is to interrelate the source and targeted source
