
#include <stdio.h>

int main()
{
    int n;
    printf ("entre le npmbre");
    scanf("%d",&n);
    if(n > 0){
        printf("le nombre est positif");
    }else if(n < 0){
        printf("le nombre est negatif");
    }else{
        printf("le nombre est nul égal à zéro");

    }

    return 0;
}