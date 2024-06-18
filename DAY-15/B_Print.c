#include<stdio.h>
void fun(int x)
{
    int i;
    for( i = 1 ; i < x ;i++)
    {
        printf("%d ",i);
    }
    if(i = x)
    {
        printf("%d",i);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);


    return 0;
}