#include <stdio.h>

int main()
{
    int i,n;
    printf("entre le nombre\n");
    scanf("%d",&n);
    printf("N= %d Premiers Nombres Pair est \n",n);
    for(i=1 ; i <= n ; ++i){
        if(i % 2 == 0){
            printf(" %d ",i);
        }
    }


    return 0;
}