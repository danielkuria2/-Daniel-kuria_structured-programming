#include <stdio.h>
#include <stdlib.h>

int main()
{
    double radius,result;
    double pi= 3.142;
    printf("please enter radius of sphere \n");
    scanf("%lf", &radius);
    result =(4.0/3.0)*pi*radius*radius*radius;
    printf("volume=%lf", result);

    return 0;
}
