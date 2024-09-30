
#include <stdio.h>
#include <math.h>

int main()
{
    float  a,b,c,Delta,x,x1,x2;
    printf("entre les nombre:");
    scanf("%f %f %f",&a ,&b,&c);
    Delta = pow (b,2)-(4*a*c);
    if(Delta<0)
        printf("pas des solution");
    else if(Delta ==0){
        x=(-b)/(2*a);
        printf("la solution est %f",x);
    }else{
        x1=(-b-sqrt(Delta))/(2*a);
        x1=(-b+sqrt(Delta))/(2*a);
        printf("les solution est %f et %f",x1,x2);
    }
    return 0;
}