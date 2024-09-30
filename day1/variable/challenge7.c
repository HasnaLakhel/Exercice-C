#include <stdio.h>


int main() {
    float a,b,c,Moyenne;
    printf("entre les trois nombres\n");
    scanf("%f %f %f",&a,&b,&c);
    Moyenne=a*2+b*3+c*5;
    Moyenne=Moyenne/10;
    printf("la moyenne pondérée de trois nombres donnés est %2.f",Moyenne);
    return 0;
}