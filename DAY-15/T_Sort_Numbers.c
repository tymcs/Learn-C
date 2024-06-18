#include<stdio.h>
int main()
{
    int a[3];

    for(int i = 0 ; i <= 3 ; i++)
    {
        scanf("%d",&a[i]);
    }

    int A = a[0];
    int B = a[1];
    int C = a[2];

    for(int i = 0 ; i <= 3-1 ; i++)
    {
        for( int j = i+1 ; j < 3 ;j++)
        {
            if(a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for( int i = 0 ; i < 3 ; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n%d\n%d\n%d\n",A,B,C);

    return 0;
}