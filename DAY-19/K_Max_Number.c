#include<stdio.h>
#include<limits.h>

int fun(int A[],int n,int i)
{

    if(i == n)
    {
        return INT_MIN;
    }
    int max = fun(A,n,i+1);
    if(A[i] > max)
    {
        return A[i];
    }
    else
    {
        return max;
    }

}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];

    for(int i = 0 ; i < N ; i++)
    {
        scanf("%d",&A[i]);
    }

    int max = fun(A,N,0);

    printf("%d\n",max);

    return 0;
}