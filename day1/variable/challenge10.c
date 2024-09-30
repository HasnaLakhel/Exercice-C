#include <stdio.h>
#include <math.h>

int main() {
    float r , volume;
    int const pi=3.14;
    printf("entre rayon");
    scanf("%f",&r);
    volume =(4/3)*pi*pow (r,3);
    printf(" le volume d'une sphère est: volume=%.2f",volume);
    return 0;
}