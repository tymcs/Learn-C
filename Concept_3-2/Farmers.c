#include<stdio.h>
int main()
{
    int T ;
    scanf("%d",&T);

    while(T-- > 0)
    {
        int M1,M2,D;
        scanf("%d %d %d",&M1,&M2,&D);
        int fewer_days;
        int sum = 0 ;
        int mul = 1;
        sum = sum + M1 + M2;
        mul = M1 * D;
        fewer_days = D - (mul/sum);

        printf("%d\n",fewer_days);

    


    }

    return 0;
}