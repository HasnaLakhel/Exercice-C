
#include <stdio.h>

int main()
{
    char C ;
    printf("entre le caracter");
    scanf("%s",&C);
    if(C >= 'A' && C <= 'Z' || C >= 'a' && C <= 'z'){
        printf("les donnee que tu es entré est alphabets\n");
        
         if(C >= 'A' && C <= 'Z'){
            printf("le caracter que tu es entré est majuscule");

        }else{
            printf("les caracter que tu es entré est minuscule");

        }
        
    }
    return 0;
}