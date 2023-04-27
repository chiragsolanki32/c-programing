#include<stdio.h>
void main(){
char s1[10],s2[10];
int i;
printf("enter the string 1 and 2\n");
scanf("%s %s",s1,s2);

for(i=0;s1[i];i++)
{

if(s1[i]!=s2[i])
break;

}
printf("\n");
if(s1[i]==s2[i])
printf("this string is equal\n");
else
printf("this string is not eqal\n");
printf("\n");
}