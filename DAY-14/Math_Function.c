#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double x;
    scanf("%lf",&x);
    // int ans = ceil(x);
    // int ans = floor(x);
    // int ans = round(x);
    int ans = abs(x);
    printf("%d",ans);


    return 0;
}
