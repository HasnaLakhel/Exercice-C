#include <stdio.h>

int Factorielle(int N){
    int F=1,i; 
    for ( i = 1; i <= N; i++)
    {
       F=F*i;
    }
    return F;
}
 
int main(){
    int N;
    printf("entre le nombre ");
    scanf("%d",&N);
    printf("la Factorielle de %d = %d!",N,Factorielle(N));
   return 0;
}