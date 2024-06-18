#include<stdio.h>

// return type + No_parameter

int sum(void)
{
    int a , b;
    scanf("%d%d",&a,&b);

    int sum = a + b;

}
int main()
{
    int s = sum();
    printf("%d",s);
    

    return 0;
}