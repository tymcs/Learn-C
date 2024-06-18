#include<stdio.h>
int main()
{
    int a , b;
    int mod;
    printf("Enter the value of a and b:\n");
    scanf("%d%d",&a,&b);
    float dvd = a*1.0/b;//int ke float korlam
     mod = a%b;
    printf("dvd = %f\n",dvd);
    printf("reminder = %d",mod);
    return 0;
}