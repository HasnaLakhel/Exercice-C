#include <stdio.h>

int Parite(int N){
    if (N%2 ==0)
    {
        return 1;
    }else
    {
        return 0;
    }
}
 
int main(){
    int N;
    printf("entre le nombre ");
    scanf("%d",&N);
   if (Parite(N))
   {
     printf("le nombre est pair ");
   }else
   {
    printf("le nombre est impair ");
   }
   
   
   return 0;
}