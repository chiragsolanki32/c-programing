#include<stdio.h>
void my_copy(const char*,char*);
void main(){
    int i;
    char s[10],d[10];
    printf("enter the string...");
    scanf("%s",s);
    my_copy(s,d);
    printf("s=%s d=%s\n",s,d);
}


void my_copy(const char *s,char *d)
{
    int i;
for( i=0;s[i]!='\0';i++)
{d[i]=s[i];
}
d[i]='\0';

}




