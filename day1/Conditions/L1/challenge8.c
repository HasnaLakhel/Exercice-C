
#include <stdio.h>

int main()
{
    float M;
    printf ("entre le moyenne");
    scanf("%f",&M);
    if(M > 16){
        printf("  la mention très bien");
    }else if(M > 14 && M <16){
        printf(" la mention bien");

    }else if(M > 12 && M <14){
        printf("la mention assez bien");

    }else if(M > 10 && M <12){
        printf("la mention passable");

    }else{
        printf("la mention recalé");

    }

    return 0;
}