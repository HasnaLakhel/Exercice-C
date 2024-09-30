#include <stdio.h>


int main() {
    float C;
    printf("entre la température en Celsius : ");
    scanf("%f",&C);
    if(C < 0){
        printf("l'état de l'eau à cette température est: solide");
    }else if (C < 100){
         printf("l'état de l'eau à cette température est: Liquide");
    }else{
        printf("l'état de l'eau à cette température est: gaz");
    }

    return 0;
}