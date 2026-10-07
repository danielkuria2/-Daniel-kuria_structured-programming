#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [50];
    int length = 0;
    printf("please enter your name\n");
    scanf("%s", name);
    while (name[length] != '\0' && name[length] != '\n')
    {
        length++;
    }
    printf("Your name is %s\n", name);
    printf("Length of your name = %d\n", length);
    return 0;
}
