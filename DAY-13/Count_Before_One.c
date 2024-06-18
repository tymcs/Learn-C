#include<stdio.h>

int count_before_one(int A[],int N)
{
    int number = 0;

    
    for(int i = 0 ; i < N ; i++)
    {
        if(A[i] != 1)
        {
            number++;
            
        }
        else
        {
            break;
        }

    
    }
    return number;


}
int main()
{
    int N;
    scanf("%d",&N);
    int A[N];

    for(int i = 0 ; i < N; i++)
    {
        scanf("%d",&A[i]);
    }

   

    int x = count_before_one(A,N); ;
    printf("%d",x);


    return 0;
}