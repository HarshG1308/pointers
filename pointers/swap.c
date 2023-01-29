#include<stdio.h>

int main()
{
    int a=10,b=20,*p,*q;
    p=&a;q=&b;
    printf("Values before swapping: %d %d\n",*p,*q);
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
    printf("Values after swapping: %d %d",*p,*q);
    return 0;
}