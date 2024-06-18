#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];
    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d",&A[i]);
    }

    int M;
    scanf("%d",&M);
    int B[M];
    for(int i = 0 ; i < M;i++)
    {
        scanf("%d",&B[i]);
    }
   int ANS[N+M];
   for(int i = 0 ; i < N ; i++)
   {
    ANS[i] = A[i];
   }
   int i = N;
   for(int j = 0 ; j < M ;j++)
   {
    ANS[i] = B[j];
    i++;
   }


   for(int i = 0 ; i < N+M ; i++)
   {
    printf("%d ",ANS[i]);
   }

   

    return 0;
}