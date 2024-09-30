#include <stdio.h>
#include <math.h>

int main() {
    float a,b,c,MoyenneGeo;
    printf("entre les trois nombres \n");
    scanf("%f %f %f",&a,&b,&c);
    MoyenneGeo= pow(a*b*c,1/3); 
    printf("la moyenne pondérée de trois nombres donnés est %2.f",MoyenneGeo);
    return 0;
}