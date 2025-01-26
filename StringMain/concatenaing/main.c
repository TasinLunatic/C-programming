#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[]="Hello";
    char b[]="Emma";

    int lena=strlen(a);
    int lenb=strlen(b);
    int lenc=lena+lenb;
    char c[lenc+1];

    for(int i=0;i<lena;i++){
        c[i]=a[i];
    }

    for(int i=0;i<lenb;i++){
            c[lena+i]=b[i];

    }
    c[lena+lenb]='\0';
    printf("%s",c);

}
/**
ab
abc
ababc
*/
