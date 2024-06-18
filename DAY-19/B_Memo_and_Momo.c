#include<stdio.h>
int main()
{
   long long int A,B,K;
    scanf("%lld%lld%lld",&A,&B,&K);

    if((A%K == 0) && (B%K != 0))
    {
        printf("Memo");
    }
    else if((B%K == 0) && (A%K != 0))
    {
        printf("Momo");
    }
    else if((A%K == 0) && (B%K == 0))
    {
        printf("Both");
    }
    else if((A%K != 0) && (B%K != 0))
    {
        printf("No One");
    }

    return 0;
}