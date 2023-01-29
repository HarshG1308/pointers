#include<stdio.h>

int main()
{
    int a[3],b[4],c[7],i;

    for(i=0;i<3;i++)
    scanf("%d",&a[i]);

    for(i=0;i<4;i++)
    scanf("%d",&b[i]);

    for(i=0;i<3;i++)
    c[i]=a[i];

    for(int k=i,j=0;k<7,j<3;k++,j++)
    c[k]=b[j];

    for(i=0;i<7;i++)
    printf("%d ",c[i]);

    return 0;
}