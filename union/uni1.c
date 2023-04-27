#include<stdio.h>
#include<string.h>
union a1 {
    int no;
    char name[50];
    float id;
};
int main(){

    union a1 p;

    printf("enter the number of the a1");
    scanf("%d"&p.no);
    printf("enter the empoie name");
    scanf("%s",p.name);
    printf("enter the empoiy id");
    scanf("%f",&p.id);

    printf("%d %s %f\n",p.no,p.name,p.id);
}







