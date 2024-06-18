#include<stdio.h>
void fun(int A[],int n,int i)
{
    if(i == n) return;
    printf("%d\n",A[i]);
    fun(A,n,i+1);


    

}

int main()
{
    int n;
    scanf("%d",&n);

    int A[n];
    for(int i = 0 ;i < n ; i++)
    {
        scanf("%d",&A[i]);
    }
    fun(A,n,0);
    

    return 0;
}