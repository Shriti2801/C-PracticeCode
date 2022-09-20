//9. precedence & associativity

#include<stdio.h>                
    int fun1()
    {
        printf("Shriti");
        return 1;
    }
    int fun2()
    {
        printf("Singh");
        return 1;
    }
    int main()
    {
        int a;
        a=fun1()+fun2();
        printf("%d",a);
        return 0;
    }