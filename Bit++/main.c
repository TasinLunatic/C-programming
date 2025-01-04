#include <stdio.h>
#include <stdlib.h>

int main(){
    int x=0;

    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        char a,b,c;
        scanf(" %c %c %c",&a,&b,&c);

        if(b =='+')  x++;
        else if(b =='-') x--;


    }
    printf("%d\n",x);
}
