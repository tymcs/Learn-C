#include<stdio.h>
void fun(int n)
{
    //base case
    if(n==0) return;
    int x=n%10 ;// 4
    fun(n/10);
    printf("%d ",x);

}
int main()
{
    int T;
    scanf("%d",&T);
    for(int t = 0 ; t < T ; t++)
    {
    int n;
    scanf("%d",&n);
    fun(n);
    if(n == 0)
    {
        printf("0");
    }
    printf("\n");
    }
    

    return 0;
}