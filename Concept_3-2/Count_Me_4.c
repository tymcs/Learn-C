#include<stdio.h>
#include<string.h>
int main()
{
    char S[10001];
    scanf("%s",S);

    int cnt[26] = {0};

    for(int i = 0 ; i < strlen(S);i++)
    {
        int index = S[i] -'a';
        cnt[index]++;
    }

    for(int i = 0 ; i < 26 ; i++)
    {
        if(cnt[i] != 0)
        printf("%c - %d\n",i+97,cnt[i] );
    }

    return 0;
}