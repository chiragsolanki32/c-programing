// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10],ele,i;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array elements\n");
    for(i=0;i<ele;i++)
    scanf("%d",&a[i]);
    for(i=0;i<ele;i++)
    printf("%d\t",a[i]);


} 