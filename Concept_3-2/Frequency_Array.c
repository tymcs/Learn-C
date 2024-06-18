#include<stdio.h>
int main()
{
    int a[10];
    for( int i = 0 ; i < 10 ; i++)
    {
        scanf("%d",&a[i]);
    }
    int freq[27] = {0};
    for(int i = 0 ; i < 10 ;i++)
    {
        int index = a[i];
        freq[index]++;
    }
    for(int i = 0; i < 27 ; i++)
    {
        if(freq[i] != 0)
        printf("%d = %d\n",i,freq[i]);
    }

    return 0;
}