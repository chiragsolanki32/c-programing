#include<stdio.h>
void main(){
int a,b;
printf("enter the number \n");
scanf("%d %d",&a,&b);
printf("before the swaping a=%d b=%d\n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after  the swaping a=%d b=%d\n",a,b);

}