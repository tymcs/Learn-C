#include<stdio.h>
int main()
{
    int n,s,k,l;
    scanf("%d",&n);
    s = n - 1;
    k = 1;
    l = (2*n) - 1;

    for( int i  = 1 ; i <= l ; i++)
    {
        for(int j = 1 ; j <= s ; j++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= k ; j++)
        {
            printf("*");
        }
        

        if( i <= n-1)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;

        }

        printf("\n");
    }

    return 0;
}