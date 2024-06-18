#include<stdio.h>
#include<string.h>

int is_Palindrome(char a[],int x)
{
    int flag = 0;
    for(int i = 0 ; i < x ; i++)
    {
        if(a[i] != a[x - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        return 1;
    }
    else 
    return 0;



}
int main()
{
    char a[1001];
    scanf("%s",a);

    int x = strlen(a);

    int y = is_Palindrome(a,x);
    if(y == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}