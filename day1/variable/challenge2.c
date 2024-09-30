#include <stdio.h>


int main() {
    float celsius, kelvin;
    printf("entre la température en Celsius: ");
    scanf("%f",&celsius);
    kelvin=celsius + 273.15;
    printf("la Temperature transforme en Kelvin est: %.2f",kelvin);

    return 0;
}