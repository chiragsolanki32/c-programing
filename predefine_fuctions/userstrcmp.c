#include<stdio.h>

int main()
{
        char s1[20], s2[20];
        int i=0, c=0;

        printf("\nEnter first string :: ");
        scanf("%s",s1);
        printf("\nEnter second string :: ");
        scanf("%s",s2);

        printf("\nStrings are :: \n\n");
    printf("%s\n",s1);
   printf("%s\n",s2);

        while((s1[i]!='\0') || (s2[i]!='\0'))
    {
                if(s1[i]!=s2[i])
                        c++;
                i++;
        }

        if(c==0)
                printf("\nStrings are equal.\n");
        else
                printf("\nStrings are not equal.\n");

        return 0;
}