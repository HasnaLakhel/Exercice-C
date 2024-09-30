#include <stdio.h>


int main() {
    float km, yards;
    printf("entre la distance en kilomètres: ");
    scanf("%f",&km);
    yards=km * 1093.61;
    printf("la distance en yard est: %.2f",yards);

    return 0;
}