#include<stdio.h>

void fun(int a[],int n)
{
    a[0] = 500;
   

  
}
int main()
{
    int a[5]={50,40,30,20,10};

      fun(a,5);

     for(int i = 0 ; i < 5; i++)
    {
        printf("%d ",a[i]);

    }
    printf("\n");
  
   



    return 0;
}