#include<stdio.h>
// void fun(int a[] ,int n)
void fun(int * a ,int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d ",a[i]);
    }

}
int main()
{
    int a[5] = { 50,40,30,20,10};
    fun(a,5);


    return 0;
}