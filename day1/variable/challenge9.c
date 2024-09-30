#include <stdio.h>
#include <math.h>

int main() {
    float x1,y1,z1,x2,y2,z2;
    float distance;
    printf("entre le premier points:\n");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("entre le deuxieme points \n");
    scanf("%f %f %f",&x1,&y2,&z2);
    distance= sqrt ((pow (x2-x1 ,2))+(pow(y2-y1,2))+(pow(z2-z1,2))); 
    printf("la distance entre deux points est: %2.f",distance);
    return 0;
}