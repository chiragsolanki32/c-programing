// C program to illustrate strings
  
#include <stdio.h>
#include <string.h>
  
int main()
{
    // declare and initialize string
    char str[] = "CHIRAG SOLANKI";
  
    // print string
    printf("%s\n", str);
    
    int length = 0;
    length = strlen(str);
    
    // displaying the length of string
    printf("Length of string str is=%d\n", length);
  
    return 0;
}