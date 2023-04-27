#include <stdio.h>
#include <string.h>
 
int main()
{
    char  str1[20] = "chirag";
    char str2[3];
 
    strncpy(str2, str1,sizeof(str2));
 
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
 
    return 0;
}