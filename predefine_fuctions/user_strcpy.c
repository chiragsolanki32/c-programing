#include<stdio.h>

/* Function prototype */
void copy(char str2[30], char str1[30]);

/* Main function */
int main()
{
 char str1[30], str2[30];
 int i=0;

 printf("Enter string:\n");
 scanf("%s",str1);
 
 copy(str2,str1);
 
 printf("Copied string is: %s\n", str2);
 
 return 0;
}

/* strcpy function*/
void copy(char str2[30], char str1[30])
{
 int i;
 for(i=0;str1[i]!='\0';i++)
 {
  str2[i] = str1[i];
 }
 str2[i] = '\0';
}