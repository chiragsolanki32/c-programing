#include<stdio.h>
void main(){
int num,pos;
printf("enter the number ");
scanf("%d",&num);
printf("enter the bit position");
scanf("%d",&pos);
printf("before the number =%d \n",num);
num=num|1<<pos;
printf("after the number is");
}










