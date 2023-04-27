#include<stdio.h>
#include<stdlib.h>
struct student{
char name[50];
int roll_no;
float marks;
char city[20];
}s[5];
void main()
{
struct student st;
int i;
//for(i=0;i<=5;i++)
printf("enter the student name....\n ");
scanf("%s",st.name);
printf("enter the student roll number....\n ");
scanf("%d",&st.roll_no);
printf("enter the student marks....\n ");
scanf("%f",&st.marks);
printf("enter the student city name  ....\n ");
scanf("%s",st.city);

printf("1)%s\n2)%d\n3)%f\n4)%s\n",st.name,st.roll_no,st.marks,st.city);
}











