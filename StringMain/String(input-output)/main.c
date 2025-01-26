#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter your name:");

    char name[100];
    gets(name); ///scanf("%s",&name) for short name
    printf("Hello ,%s\n",name);
    return 0;
}
