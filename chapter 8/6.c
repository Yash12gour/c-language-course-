#include <stdio.h>
#include <string.h>
int main()
{
    char s[] = "Hello";
    char t[] = "World";
    strcat(s, t);
    printf("String = %s", s);
}
// it is to join two strings
