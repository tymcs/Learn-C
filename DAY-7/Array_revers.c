#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    int ar[n];
    //Variable sized arry can't be initialized
    for(int i = 0; i<n ;i++)
    {
        scanf("%d\n",&ar[i]);
    }
    for(int i = n-1; i>=0; i--)
    {
        printf("ar[%d] = %d\n",i,ar[i]);
    }

    return 0;
}