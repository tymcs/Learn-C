#include<stdio.h>
int main()
{
    int a[5] = {10,20,30,40,50};

    printf("a[0] er address = %p\n",&a[0]);
    printf("a[0] er address = %p\n\n",a);
    printf("a[0] er value = %d\n",a[0]);
    printf("a[0] er value = %d\n\n",*a);

    printf("%d\n",*(a + 1));
    printf("%d\n",*(1 + a));
    printf("%d\n",a[1]);
    printf("%d\n",1[a]);
    printf("%d\n",2[a]);



    return 0;
}

