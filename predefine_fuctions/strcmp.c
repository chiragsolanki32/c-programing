#include<stdio.h>

int main()
{
    char str[100];
    int i, length = 0;
    printf("Enter the string\n");
    scanf("%s",str);
    
    for(i = 0; str[i] != '\0'; i++)
          length++;
    printf("Length = %d\n",length);
    
    return 0;
}