#include <stdio.h>

int main()
{
    int n;
    printf("entre le nombre:");
    scanf("%d",&n);
    if(n/2 == 0){
        printf("le nombre est pair");
    }else{
        printf("le nombre est impair");

    }
    return 0;
}