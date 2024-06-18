#include<stdio.h>
int main()
{
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C],b[R][C],c[R][C];

    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ;  j < C ; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ;  j < C ; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
   
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ;  j < C ; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    for(int i = 0 ; i < R ; i++)
    {
        for(int j = 0 ;  j < C ; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}