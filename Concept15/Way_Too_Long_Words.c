#include<stdio.h>
#include<stdio.h>
int main()
{
    int T;
    scanf("%d",T);
    char S[101];
    scanf("%s",S);
    int str = strlen(S);
    if(strlen(S) <= 10)
    {
        printf("%s",S);
    }
    else
    {
        for(int i = 0 ; i < str ; i++)
        {
            printf("%c",S[0]);
            printf("%d",(str - 2));
            printf("%c",S[str]);
        }

    }
    return 0;
}