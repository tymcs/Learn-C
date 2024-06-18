#include<stdio.h>
int main()
{
    float X,P;
    scanf("%f%f",&X,&P);

    float RP = (100 -X);
    float ans = 1;
    ans = (100*P*ans);
    float TP = ans/RP;
    printf("%.2f",TP);

    return 0;
}