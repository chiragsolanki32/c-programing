#include <stdio.h>
#include<stdlib.h>
struct student //take the student struchre 

{
    char name[50];
    int roll;
    float marks;
    char city[20];
};//struchre declation  
int main(){
{
    int c;
    printf("no. of students\n");//enter the information of the student
    scanf("%d",&c);//take the student recored for the n number of student

    struct student *s;//take the s pointer 
    s=(struct student *) malloc (sizeof(struct student));//using malloc run time memmry alloat
    int i; 
    printf("\nstudents information:\n");

    for(i=0;i<c;++i)//take the input from the data
    {
        printf("enter the name:");
        scanf("%s",s[i].name);
        printf("enter roll no:");
        scanf("%d",&s[i].roll);
        printf("enter the city name:");
        scanf("%s",s[i].city);
        printf("enter the marks:");
        scanf("%f",&s[i].marks);
        printf("\n");
    }
        printf("\n******details of all the student********\n");

    for(i=0;i<c;++i)//for loop for the printing perpose
    {
        printf("1)the student roll no. is:%d\n",s[i].roll);
        printf("2)the student name:%s\n",s[i].name);
        printf("3)the student city name:%s\n",s[i].city);
        printf("4)the student mark is:%.2f\n",s[i].marks);
        printf("\n");
    }
    

    int var = 1;   
    switch (var) {
        case 1:
            
        printf("enter the student data:");
        scanf("%s",s[i].name);
            break;
 
        case 2:
            printf("delate the data.\n");
            scanf("%d",&s[i].roll);
            break;
 
        case 3:
            printf("get student record\n");
            scanf("%s",s[i].city);
            break;
 
        default:
            printf("no action in this opration\n");
            break;
    }
 
    return 0; 

}
}
