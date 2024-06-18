#include<stdio.h>
int main()
{
    int i;
    long long int sum = 0;
    int n;
    scanf("%d",&n);
    for(i = 1; i <= n ; i++)
    {
        sum = sum + i;
        // printf("%d\n",sum);
    }
    printf("%lld",sum);


    return 0;
}