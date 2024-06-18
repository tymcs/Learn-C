#include<stdio.h>
int main()
{
    int T ;
    scanf("%d",&T);
    while(T-->0)
    {
        int N ;
        scanf("%d",&N);
        int A[N];
        for( int i = 0 ; i < N ; i++)
        {
            scanf("%d",&A[i]);
        }
        int X ;
        scanf("%d",&X);
        int flag = 0;
        for(int i = 0; i < N ; i++)
        {
            if(A[i] == X)
            {
                flag++;
            }
        }
        if(flag == 0)
        {
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }

    return 0;
}