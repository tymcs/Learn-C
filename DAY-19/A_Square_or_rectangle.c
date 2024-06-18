#include<stdio.h>
int main()
{
    int T ;
    scanf("%d",&T);

    while(T-- > 0)
    {
        int W,H;
        scanf("%d%d",&W,&H);

        if(W == H)
        {
            printf("Square\n");
        }
        else
        {
         printf("Rectangle\n");
        }
    }

    return 0;
}