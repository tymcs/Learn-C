#include<stdio.h>
int main()
{
    
    int b[5];
    int max = 0;
    
    
    for(int i = 0 ; i < 5; i++)
    {
        scanf("%d",&b[i]);
        if(b[i] > max)
        {
            max = b[i];
        }
        
    }
      
      int a[max + 1];
      for(int i = 0 ; i < max + 1 ; i++)
      {
        a[i] = 0 ;
      }
   
    for( int i = 0; i < 5; i++)
    {
        int index = b[i];
        a[index]++;
    }
     for(int i = 0 ; i < max + 1 ; i++)
    {
        if( a[i] != 0)
        printf("%d = %d\n",i,a[i]);
    }

    return 0;
}