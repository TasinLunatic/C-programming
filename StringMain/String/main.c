#include <stdio.h>
#include <stdlib.h>

int main()
{
    char st[]="This is on\ntwo lines";

    int sz=sizeof (st)/sizeof(st[0]);
    printf("%d\n",sz);

    for(int i=0;i<sz;i++){
        printf("%d -> %c(ASCII =%d)\n",i,st[i],st[i]);
    }
    return 0;
}
