#include <stdio.h>
#include <string.h>

int main()
{
    char C1[100],C2[100];
    puts("entre le message" );
    fgets(C1,sizeof(C1),stdin);
    puts("entre le message2");
    fgets(C2,sizeof(C2),stdin);
    if (strcmp(C1,C2)==0)
    {
        puts("deux chaînes de caractères elles sont égale");
    }else
    {
        puts("deux chaînes de caractères elles sont non égale");
    }
    return 0;
}