#include<stdio.h>
int main()
{
    int N ,K ;
    scanf("%d %d",&N,&K);
    

    while(N-->0)
    {
        for(int i = 1 ; i <= K ;i++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }


    return 0;
}