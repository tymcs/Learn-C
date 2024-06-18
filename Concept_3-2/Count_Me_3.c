#include<stdio.h>
#include<string.h>


    
int main()
{
    int T ;
    scanf("%d",&T);
    
    while( T-- > 0)
    {
      char S[10001];
    scanf("%s",S);

    int cnt[3]= {0};
    
     for( int i = 0 ; i < strlen(S) ; i++)
    {
        
        if(S[i]>= 97 && S[i]<= 122)
        {
            cnt[0]++;
        }
        else if(S[i] >= 65 && S[i] <= 90)
        {
            cnt[1]++;
        }
        else if(S[i] >= 48 && S[i] <= 57)
        {
            cnt[2]++;
        }
    }
     printf("%d %d %d\n",cnt[1],cnt[0],cnt[2]);

     
    }
    return 0;
}