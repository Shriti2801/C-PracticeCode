//8. float values
#include<stdio.h>               
int main()
{
    int var=1/2;
    printf("%d\n",var);
    float var1=1/2;
    printf("%.2f\n",var1);      //gives wrong values after decimal
    float var2=1.0/2.0;         //1.something is the correct float format
    printf("%.2f\n",var2);
    return 0;  
}