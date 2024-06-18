#include<stdio.h>
int main()
{
    int N ;
    scanf("%d",&N);

    int A[N];
    for( int i = 0 ; i < N ;i++)
    {
        scanf("%d",&A[i]);
    }

    int cnt[3] = {0};
    for( int i = 0 ; i < N ; i++)
    {
        if((A[i]%2 == 0) || (A[i] % 6 == 0) )
        {
            cnt[0]++;
        }
        else if (A[i] % 3 == 0)
        {
            cnt[1]++;
        }
    

    }

   
    printf("%d %d",cnt[0],cnt[1]);
        

    

    return 0;
}