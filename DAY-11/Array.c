#include<stdio.h>
int main()
{
    int a[5] ;
    int i;
    for(i = 0 ; i < 5 ; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("a[%d] = %d",i,a[i]);

    return 0;
}