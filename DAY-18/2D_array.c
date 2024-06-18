#include<stdio.h>
int main()
{
    int A[3][5];
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 5; j++)
        {
            scanf("%d",&A[i][j]);
            
        }
    }

    for(int i = 0 ; i < 3;i++)
    {
        for(int j = 0 ; j < 5 ; j++)
        {
            printf("A[%d][%d] = %d ",i,j,A[i][j]);
        }
        printf("\n");
    }


    return 0;
}