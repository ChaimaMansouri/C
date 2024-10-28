#include <stdio.h>
#include <math.h>

int main()
{
  //---------------------------------------------------
  //
  int i, taille, T[100];

  do
  {
    printf("La taille de tableau :\n");
    scanf("%d", &taille);
  } while (taille < 0);
  // Ajout les element de tableau
  for (i = 0; i < taille; i++)
  {
    printf(" T[%d] = ", i);
    scanf("%d", &T[i]);
  }
  // Affichage des element de tableau
  printf("affichage :\n");
  for (i = 0; i < taille; i++)
  {
    printf(" T[%d] = %d \n", i, T[i]);
  }
  // La somme des elements de tableau
  int s = 0;
  for (i = 0; i < taille; i++)
  {
    s = s + T[i];
  }
  printf("la somme %d \n", s);
  // Moyenne d'element de tableau
  int moy;
  moy = s / taille;
  printf("la moyenne %d \n", moy);
  // Produit d'élément de tableau
  int pro = 1;
  for (i = 0; i < taille; i++)
  {
    pro = pro * T[i];
  }
  printf("le produit %d\n", pro);
  // Le max et le min de tableau
  int min, max;
  max = T[0];
  min = T[0];
  for (i = 1; i < taille; i++)
  {
    if (max < T[i])
    {
      max = T[i];
    }
    if (min > T[i])
    {
      min = T[i];
    }
  }
  printf("le max %d\n", max);
  printf("le min %d\n", min);
  // Recharche une nombre dans vecteur
  int nombre, S = 0;
  printf("donner le nombre qui vous racharche \n:");
  scanf("%d", &nombre);
  for (i = 0; i < taille; i++)
  {
    if (nombre == T[i])
    {
      S++;
    }
  }
  if (S != 0)
  {
    printf("le nombre exist dans le vecteur\n");
  }
  else
  {
    printf("n'existe pas\n");
  }
  // Le nombre d'occerence dans vecteur
  int no, occ = 0;
  printf("le nombre qui vous calcule le nombre d'occerence :\n");
  scanf("%d", &no);
  for (i = 0; i < taille; i++)
  {
    if (no == T[i])
    {
      occ++;
    }
  }
  if (occ != 0)
  {
    printf("le nombre d'occerence %d\n", occ);
  }
  else
  {
    printf("n'existe pas\n");
  }
  // Calcule du nombre d'éléments supérieure à la moyenne d'un tableau
  for (i = 0; i < taille; i++)
  {
    if (moy < T[i])
    {
      int so = so + T[i];
    }
  }
  // Invers de tableau
  int t[100];
  for (i = 0; i < taille; i++)
  {
    t[taille - i] = T[i];
  }
  for (i = 0; i < taille; i++)
  {
    printf("t[%d]=%d \n", i, t[i]);
  }
  // Les nombre premier dans vecteur
  /*/ int tp[100];
   int tail , estpremier , x ,cmp ;
   printf("donner la taille de vecteur de nombre premier :\n");
   scanf("%d",&tail);
   cmp=0;
    x=2;
   do{
       for( i=2 ; i <= x/2 ; i++){
           if(x%i ==0){
               estpremier=1;
               break;
           }
       }
       if(estpremier==0){
           tp[cmp]=x ;
           cmp++;
       }
       x++;

   }while(cmp<tail);
    for( i=0 ; i<tail ;i++){
     printf("tp[%d]=%d \n",i,tp[i]);
   }*/
  // inserer un element dans un tableau une position
  int pos, nomb;
  printf("entre la position de nombre et le nombre\n");
  scanf("%d\n %d", &pos, &nomb);
  if (pos > taille || pos < 0)
  {
    printf("faux");
  }
  else
  {
    for (i = taille; i >= pos; i--)
    {
      T[i] = T[i - 1];
    }
    T[pos - 1] = nomb;
    taille++;
  }
  for (i = 0; i < taille; i++)
  {
    printf("T[%d]=%d \n", i, T[i]);
  }
  // Supprimé dans tableau par position

  int POS;
  printf("entre la position de nombre :\n");
  scanf("%d", &POS);
  if (pos > taille || pos < 0)
  {
    printf("faux");
  }
  else
  {
    for (i = POS; i < taille - 1; i--)
    {
      T[i - 1] = T[i];
    }
    taille--;
  }
  for (i = 0; i < taille; i++)
  {
    printf("T[%d]=%d \n", i, T[i]);
  }
  // Determine les element  unique de tableau
  int j, cop;
  int fr[100];
  for (i = 0; i < taille; i++)
  {
    fr[i] = -1;
  }
  for (i = 0; i < taille; i++)
  {
    cop = 1;
    for (j = i + 1; j < taille; j++)
    {
      if (T[i] == T[j])
      {
        cop++;
        fr[j] = 0;
      }
    }
    if (fr[i] != 0)
    {
      fr[i] = cop;
    }
  }
  for (i = 0; i < taille; i++)
  {
    if (fr[i] == 1)
    {
      printf("%d", T[i]);
    }
  }

  return 0;
}