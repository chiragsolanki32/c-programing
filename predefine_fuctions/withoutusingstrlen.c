#include<stdio.h>

int main()
{
    char string[100];
    int i, lenth = 0;
    printf("Enter the string\n");// enter the stringg nam,e an\d enter the string
    scanf("%s",string);//take ther data form the user 
    
    for(i = 0; string[i] != '\0'; i++)// using  for loop so thae thsis use for the lengh for going the end of the string
          lenth++;// lengh is intial 0 and that count the string for the strting ++
    printf("***this string size of Lenth = %d\n",lenth);// print the lenth size the 
    
    return 0;
}