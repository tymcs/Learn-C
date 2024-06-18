#include<stdio.h>
#include<string.h>
int main()
{
    char S[100001];
    scanf("%s",S);
    
    int i,index;
    int consonant = 0;

    int count[26] = {0};
    for(int i = 0 ; i < strlen(S) ; i++)
    {
        
        int index = S[i] - 'a';
        if((S[i] != 'a') && (S[i] != 'e') && (S[i] != 'i') && (S[i] != 'o')&& (S[i] != 'u'))
        {
           
            count[index]++;
            consonant = consonant + 1;

        }


    }
    printf("%d",consonant);
   
    return 0;
}