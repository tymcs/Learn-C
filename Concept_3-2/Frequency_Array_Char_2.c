#include<stdio.h>
#include<string.h>
int main()
{
    // char a[100];
    // for( int i = 0 ; i < 100 ; i++)
    // {
        // scanf("%s",&a[i]);
    // }
   int freq[26] = {0};
    int n ;
    printf("Enter the size of string: \n");
    scanf("%d",&n);

    char  ch;

    for(int i = 0; i < n ; i++)
    {
        scanf(" %c",&ch);
        int index = ch - 97;
        freq[index]++;

    }
 
    // for(int i = 0 ; i < 100 ;i++)
    // {
        // int index = a[i] - 97;
        // freq[index]++;
    // }
    for(int i = 0; i < 26 ; i++)
    {
        if(freq[i] != 0)
        printf("%c = %d\n",i+97,freq[i]);
    }

    return 0;
}