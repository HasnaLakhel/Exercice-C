
#include <stdio.h>

int main()
{
    char C;
    printf ("entre le caracter");
    scanf("%s",&C);
    if(C > 65 && C < 90){
        printf(" caracter est majuscule");
    }else{
        printf("caracter est minuscule");

    }

    return 0;
}