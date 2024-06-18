#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);

    if (tk >= 100)
    {
        printf("Bargur khabo");
    }
    else if (tk >= 50)
    {
        printf("Fuchka khabo");
    }
    else
    {
        printf("Khabo na");
    }

    return 0;
}