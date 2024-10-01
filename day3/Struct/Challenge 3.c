#include <stdio.h>
////structure ///
 struct rectangle{
    int longueur;
    int largeur;
}  ;

////fonction  ///
int RECTANGLE(struct rectangle R){
    return R.longueur*R.largeur;
}

int main()
{
 struct rectangle R;
 int area;
 printf("entre le longueur \n");
 scanf("%d",&R.longueur);
 printf("entre le largeur\n");
 scanf("%d",&R.largeur);
 area=RECTANGLE( R);
 printf("l'aire du rectangle est: %d\n",area);
 
    return 0;
}