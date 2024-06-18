#include<stdio.h>
int main()
{
    int a[5];
    for(int i = 0 ; i<=4 ;i++ )
    //i<5
    {
    scanf("%d\n",&a[i]);
    }
    for(int i = 0 ; i < 5 ;i++)
    {
        printf(" a[%d] = %d\n",i,a[i]);
    }

    return 0;
}