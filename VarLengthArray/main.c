#include <stdio.h>
#include <stdlib.h>

int main()
{
    int students;
    printf("Enter the number of students:");
    scanf("%d",&students);

    int mark[students];
    for(int i=0;i<students;i++){
        printf("Enter student %d marks:",i+1);
        scanf("%d",&mark[i]);
    }
    for(int i=0;i<students;i++){
            printf("student %d got %d mark\n",i+1,mark[i]);
    }
    return 0;
}
