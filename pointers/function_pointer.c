#include<stdio.h>
int add();
int main()
{
    int (*ptr)();
    ptr=&add;
    int sum=(*ptr)();
    printf("Sum is: %d",sum);
    return 0;
}
int add()
{
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}