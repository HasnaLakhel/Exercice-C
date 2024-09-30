#include <stdio.h>
 
int main()
{
   int N_Inverse = 0, N;
 
   printf("Entrez un nombre à inverser\n");
   scanf("%d", &N);
 
   while (N != 0)
   {
      N_Inverse = N_Inverse * 10;
      N_Inverse = N_Inverse + N%10;
      N = N/10;
   }
 
   printf("Le nombre en sens inverse est = %d\n", N_Inverse);
 
   return 0;
}