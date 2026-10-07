#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [50];
    double age;
    printf(" Enter your name ");
    scanf("%s",name);
    printf(" Enter your age ");
    scanf("%lf",&age);
        if (age >=18){
            printf("adult");
        }else{
            printf("underage");
        }

    return 0;
}
