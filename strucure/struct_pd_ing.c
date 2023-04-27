#include<stdio.h>
#pragma pack(1)
struct data{//struchre dectaion od the data 
char pen[5];//char 5 aloocate to that opan variable 
int prise;//interger dayta type and prise is a varaibale of the int
char pencil[5];// char is data tye and this pencil is a variable
};//dectaion of struct 

void main(){
struct data d;
printf("enter the pencil name...\n");//prints the data what you wents 
scanf("%s",d.pencil);//scan the data form the user
printf("enter the pen name...\n");
scanf("%s",d.pen);
printf("enter the prise...\n");
scanf("%d",&d.prise);//sve the dta from the use 
printf("1)%s\n2)%s\n3)%d\n",d.pencil,d.pen,d.prise);//printing rthe data  for the printing perpose the printting
printf("%d\n",sizeof(struct data));//printinfg the size od the this given structre 

} 











