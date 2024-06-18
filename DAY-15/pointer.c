#include<stdio.h>
int main()
{
    int x = 100;
    int *ptr = &x;
    double y = 5.75;
    double *ptr2 = &y;
    printf("ptr2 er size=%d\n",sizeof(ptr2));
    printf("y er value = %.2lf\n",y);
    printf("y er value = %.2lf\n \n",*ptr2);

    

    printf("x er address :%p\n",&x);
    printf("x er value :%d\n",x);
    x = 200;
    printf("ptr er value :%p\n",ptr);
    printf("x er value :%d\n",*ptr);
    printf("ptr er address :%p\n",&ptr);
    printf("ptr er memory size :%d\n",sizeof(ptr));

    return 0;
}