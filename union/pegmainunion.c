#include <stdio.h>
#include <string.h>
#pragma pack(1) // using this no memmoery wese hear so that is addvantage...
union SIZE
{ // declation of  the union
    int i;
    float f;
    char c[10]; // union declation higest byte allocaed to thet union
};              // 10 char take 4 4 4 byte but that use the 10 byte so r
// emaining tow byte is wested so that size of the union is 12 bytes

int main()
{

    union SIZE s; // using alias name to existing data type so that s is a union declation/...
    printf("\n*************************************************************");
    printf("\nMemory size of the union %ld\n", sizeof(s)); // 10 becouse this pagma pake 1 using

    return 0;
}