
#include <stdio.h>  
int main()  
{  
 printf("\n%d \n",func());  
printf("\n%d \n",func());  
 return 0;  
}    
int func()  
{   
    static int count=0; // variable initialization  
    count++; // incrementing counter variable  
  
   return count; }  