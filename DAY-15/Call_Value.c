#include<stdio.h>
void fun(int x)
{
    x = 200 ;
    // printf("fun er x er address = %p\n",&x);

}
int main()
{
    int x =10;
    // printf("main er x er address = %p\n",&x);

    fun(x);
    printf("Main er x er value = %d\n",x);

    return 0;
}