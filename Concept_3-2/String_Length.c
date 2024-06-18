#include<stdio.h>
#include<string.h>
int main()
{
    char a[11];
    // fgets(a,sizeof(a),stdin);
    scanf("%s",a);

    // int n = strlen(a);
    int n = 0;
    int i ;
    for( i = 0 ; a[i] != '\0' ;i++)
    {
        // printf("%c",a[i]);
        n++;
    }
    
     printf("%d %d",n,i);


    return 0;
}