#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);

    for(int cs=0;cs<t;cs++){
            int normal_rev;
            int advert_rev;
            int advert_cost;

            scanf("%d %d %d",&normal_rev,&advert_rev,&advert_cost);

            int advert_profit=advert_rev-advert_cost;

            if(advert_profit>normal_rev){
                printf("Advertise\n");
            }
            else if(advert_profit==normal_rev){
                printf("Does not matter\n");
            }
            else{
                printf("Do not advertise");
            }

    }
    return 0;
}
