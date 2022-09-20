//7. float, double, long double data types
#include<stdio.h>        
int main()
{
    float var1=3.1412345678901234;
    double var2=3.1412345678901234;
    long double var3=3.141234567890123456789;

printf("%d\n",sizeof(float));  //sizeof operator
printf("%d\n",sizeof(double));   //instead of f we can also write lf for double(varies system to sytem)
printf("%d\n",sizeof(long double));
printf("%.2f\n",var1);     //shows two places after decimal
printf("%.6f\n",var2);      //6 places after decimal point
printf("%.21Lf\n",var1);    //21 places after decimal & Lf is long double
return 0;
}