 
#include <stdio.h>
int main()
{
    char s1[100] , s2[100], i;
    printf("enter the string 1=\n");//enter the string 
    scanf("%s",s1);//take the the data from the user and that save tha data..
    for (i=0; s1[i]!='\0'; ++i) {
      s2[i]=s1[i];// copy the string into thestrin number 2s tring 
    }
    s2[i] = '\0';//string copy into the end of the destination so that null chaRCATOR
    printf("String s2 =: %s\n", s2);// PRINTING THAE COPY OF THE STRING S2 IS THE COPY 
   // printf("\n");
    return 0;
}
 