#include<stdio.h>
#include<string.h>
int main()
{
    int test ;
    scanf("%d",&test);
    while(test-->0)
    {
        char S[101];
        scanf("%s",S);

       int x =  strlen(S);
       if(x <= 10)
       printf("%s\n",S);
       else
       {
        
         printf("%c%d%c\n",S[0],(x-2),S[x-1]);
        
       }

    }
    


    return 0;
}