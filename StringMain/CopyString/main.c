#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char str[]="Hello Emma";
    char str2[10];

    strncpy(str2,str,10);
    str2[10]='\0';

    /*int len=strlen(str);
    for(int i=0;i<len;i++){
        str2[i]=str[i];
    }
    str2[len]='\0';*/
    printf("%s",str2);
    return 0;
}
