#include<stdio.h>
//global
int x = 500;

void fun(void)
{
    int s = 100 ;
    // printf("Address of s (fun) : %p\n",s);
    printf("%d",x);
    printf("Address of x = %p",&x);
}
int main()
{
    int s = 200;
    // printf("Address of s (Main):%p\n",&s);
    printf("%d\n",x);
    printf("Address of x _ main = %p\n",&x);
    fun();

    return 0;
}