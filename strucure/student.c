#include<stdio.h>
#include<stdlib.h>
struct student{

char name[50];
int roll_no;
float marks;
};
void main()
{
struct student st;
printf("enter the student name....\n ");
scanf("%s",st.name);
printf("enter the student roll number....\n ");
scanf("%d",&st.roll_no);
printf("enter the student marks....\n ");
scanf("%f",&st.marks);

printf("1)%s\n2)%d\n3)%f\n",st.name,st.roll_no,st.marks);



}











