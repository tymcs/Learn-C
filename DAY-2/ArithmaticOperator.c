#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,dvd;

    printf("Enter the value of a and b :\n");
    scanf("%d%d",&a,&b);
    sum = a + b;
    printf("Sum = %d\n",sum);
    sub = a - b;
    printf("Sub = %d\n",sub);
    mul = a * b;
    printf("mul = %d\n",mul);
    dvd = a/b;
    printf("dvd = %d",dvd);


    return 0;
}