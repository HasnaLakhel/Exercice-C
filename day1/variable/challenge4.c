#include <stdio.h>


int main() {
    float ms, kmh;
    printf("entre la vitesse en kilomètres par heure (km/h): ");
    scanf("%f",&kmh);
    ms = kmh * 0.27778;
    printf("la vitesse en mètres par seconde est: %.2f",ms);

    return 0;
}