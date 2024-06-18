#include<stdio.h>
int main()
{
    int N;
    scanf("%d ",&N);

    int A[N];
    for(int i = 0 ; i < N ; i ++)
    {
        scanf("%d",&A[i]);
    }
    int max = -100000;
    int maxpos;
    for(int i = 0 ; i < N ; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
            maxpos = i;
        }
    }
    int min = 100000;
    int minpos ;
    for(int i = 0; i < N ; i++ )
    {
        if(A[i] < min)
        {
            min = A[i];
            minpos = i;
        }
    }
    
     int temp ;
    temp = A[maxpos];
    A[maxpos] = A[minpos];
    A[minpos] = temp;

for(int i = 0 ; i < N ; i++)
{
   printf("%d ",A[i]);
}

    return 0;
}