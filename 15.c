//15. Number of char

#include<stdio.h>             
    int main()
    {
        char c=255;              //char is 8 bits long, n=8
        c=c+10;                  //265/2^8=9
        printf("%d",c);
        return  0;
    }