#include<stdio.h>//styandard library function
#include<stdlib.h>//used for the daynamic memory allocation 
int *input()
{

    int *ptr,i;
ptr=( int *)malloc( 5* sizeof(int));//using malloc for 5 interger value
printf("enter the 5 intetger\n");//enter the 5 interger number
for (i=0;i<5;i++)//usingb for loop for the enterger number 
scanf("%d",ptr+1);//take the next ptr value
return ptr;//return the ptr thid id a adress for the poiner 
}
int main(){
    int i,sum=0;
    int*ptr=input();
    for(i=0;i<5;i++)//for loop for the 5 intergr value
    sum+= (*ptr+i);//save the value at that sum interger variable
    printf("sum=%d",sum);//prinf the 5 interger number value
    free(ptr);//free the function for free ptr
    ptr = NULL;//alwas ptr asing with the null or zero
    return 0;
}         


