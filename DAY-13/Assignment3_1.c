#include<stdio.h>
int main()
{
    int N,m,n,s;
    scanf("%d",&N);
    s = N -1;
    m = 1;

    for(int i = 1 ; i <= (2*N)-1 ; i++)
    {
        for(int j = 1 ; j <= s ; j++ )
        {
            printf(" ");
        }
        if( i % 2 == 1)
        {
        for(int j = 1 ; j <= m ; j++)
        {
            printf("#");
        }
        }
        else
        {
         for(int j = 1 ; j <= m ; j++)
        {
            printf("-");
        }

        }
        if(i <= N-1)
        {
            s--;
            m += 2;
        }
        else
        {
            s++;
            m -= 2;
        }
        printf("\n");
    }

    return 0;
}

    
        
        

    
            

