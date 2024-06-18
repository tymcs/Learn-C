#include<stdio.h>
int main()
{
     int N;
    int sum = 0;
    int sum_neg = 0; 
    scanf("%d",&N);
    
    int A[N];
    for(int i = 0 ; i <= N ;i++ )
    {
        scanf("%d",&A[i]);
    }
    
    
        for(int i = 0; i < N ;i++)
        {
            if(A[i] > 0)
            {
            sum = sum + A[i];
            }
            else
            {
                sum_neg = sum_neg + A[i];
            }
        }
    
    printf("%d %d",sum,sum_neg);

    return 0;
}