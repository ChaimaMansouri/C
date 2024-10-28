//     # 1   instructions de base 

#include<stdio.h>
#include<stdlib.h>
#define true 1 , false 0 
#define pi 3,14

int main(){

  printf("instructions de base \n");
  printf("# 1  LA SOMME\n");
  printf("# 2 LA SUBTRACTION \n");
  printf("# 3  LA MULTIPLIER \n");
  printf("# 4  LA DIVISION \n");
  printf("# 5  The first and the last letter for your nom \n");
 
  //LA SOMME DE DEUX NOMBRE QUI TAPIER AVEC L'utilisateur 

     printf("\n # 1 LA SOMME\n");
      int a,b;
      scanf("%d %d",&a,&b);
      int somme=0;
      somme=a+b ;
      printf("%d\n",somme);
  //LA SUBTRACTION DE DEUX NOMBRE QUI TAPIER AVEC L'utilisateur
    
     printf("\n#  2 LA SUBTRACTION \n");

      int c,d;
      scanf("%d %d",&c,&d);
      int subtraction=0;
      subtraction=c-d ;
      printf("%d",subtraction);

  //LA MULTIPLICATION DE DEUX NOMBRE QUI TAPIER AVEC L'utilisateur

      printf("\n# 3  LA MULTIPLIER \n");

      int e,f;
      scanf("%d %d",&e,&f);
      int multiplication=0;
      multiplication=e*f ;
  printf("%d",multiplication);

  //LA DIVISION DE DEUX NOMBRE QUI TAPIER AVEC L'utilisateur

      printf("\n# 4 LA DIVISION \n");
      int g,h;
      scanf("%d %d",&g,&h);
      int division=0;
      division=g/h ;
      printf("%d",division);

  
    //----------------------------------------------------------------
    //Getin  the first letter and the last letter for  your nom  

    char S ;
    char Z;
    printf ("enter the first and the last letter for your nom :\n");
    scanf("%c ",&S );
    scanf("%c",&Z);

    printf ("the first letter for your nom      %c  "  , S );
    printf ("the last letter for your nom    %c " , Z );


  

return 0;
}

