#include<stdio.h>
void main(){

char m[50],s[30];//enter the string
int i,j;//take the interger
printf("enter the main string....\n");//enter the main string 
scanf("%s",m);//take the data from user
printf("enter the sub string...\n");//enter the sub string
scanf("%s",s);//take the sub striong
for(i=0;m[i];i++)//i is 0 so array fast substrig  addres in this arrray
{
if(m[i]==s[0])//sub string fast array alements of the main string
{
for(j=1;s[j];j++)////fast main string addres in this arrray
{
if(s[j]!=m[i+j])
break;
}
if(s[j]=='\0')// still going to nall charctor so end of the string
{
    printf("present....\n");//if string is prtesent in sub string so that print present

}
//else
//printf("not present....\n");
}

}

}








