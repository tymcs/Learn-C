#include<stdio.h>
int main()
{

    int n;
    int sum = 0;
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d\n",&a[i]);
    }
for(int i = 0 ; i < n ; i++)
{ 
  sum = sum + a[i];
}
printf("Sum = %d",sum);
    return 0;
}

