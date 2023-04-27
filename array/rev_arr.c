#include<stdio.h>
int main()
{
    int a[5],i,ele;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the array elements...\n");
     for(i=0;i<ele;i++)
 { 
     scanf("%d",&a[i]);
}
    {
         for(i=i-1;i>=0;i--)
        printf("%d \t",a[i]);
    }

    printf("\n");
    return 0;
}