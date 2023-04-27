#include<stdio.h>
int main()
{
extern int var;
printf(“The value of var is %d”, var);
return 0;
}