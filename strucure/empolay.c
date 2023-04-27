#include<stdio.h> 
struct employ
{
char name[100];
int id;
int sellery;
};
void main(){


  //  int i,n;
        //printf("Enter how many records u want to store :: ");
 //       scanf("%d",&n);
 struct employ  c1;

 

printf("enter the employ name...\n");
scanf("%s",c1.name);
printf("enter the employ id...\n");
scanf("%d",&c1.id);
printf("enter the employ sellry...\n");
scanf("%d",&c1.sellery);


printf("(1)empoy name=%s\n(2)employ id =%d\n(3)empoy sellery=%d\n"  ,c1.name,c1.id,c1.sellery);
}


