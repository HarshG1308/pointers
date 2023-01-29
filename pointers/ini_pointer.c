#include<stdio.h>

int main()
{
    int *p,a=50;
    p=&a;
    printf("Address of a is: %d\n",p);
    printf("Value of a is %d",*p);
    return 0;
}