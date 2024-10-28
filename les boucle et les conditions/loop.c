#include <stdio.h>
#include <math.h>

int main()
{
  printf("**********************************************************");
  printf(" # 1  loop do \n");
  printf(" # 2  loop while \n");
  printf(" # 3  loop for \n");
  printf(" # 4  AFFICHE LES Numbers suivant\n ");
  printf(" # 5  La somme de 1+10+100+......+10n\n ");
  printf(" # 6  la somme de 1+1/2+..............+1/n \n");
  printf(" # 7  la somme de  1+3+5+7................. \n");
  printf(" # 6  la somme de 1+1/2+..............+1/n \n");
  printf("**********************************************************");

  //-----------------------------------------------------------------
  // repeated loop

  int n;
  do
  {
    printf("donner une nombre  n : \n");
    scanf("%d", &n);
  } while (n < 0);

  //----------------------------------------------------------------
  // While loop

  int z = 0;
  while (z < 100)
  {
    z++;
  }

  //----------------------------------------------------------------
  // FOR loop

  int i = 0;
  for (i = 0; i < 100; i++)
  {
    printf("ing informatique \n");
  }

  //----------------------------------------------------------------
  // affiche les nombre suite
  int g, k;
  printf("donner le nombre ");
  scanf("%d", &k);

  for (g = k; g <= k + 10; g++)
  {
    printf("%d\n", g);
  }
  /* g=k ;
 while(g<=k+10){
   printf("%d\n",g);
   g++;
 }

 do{
    printf("%d\n",g);
    g++ ;
 }while(g<=k+10)*/

  //--------------------------------------------------------------------
  // La somme de 1+10+100+......+10n
  int j, y, soten = 0;
  printf("donner nombre");
  scanf("%d", &y);

  for (j = 0; j <= y; j++)
  {
    soten = soten + pow(10, j);
  }
  printf("%d", soten);

  //----------------------------------------------------------------
  // Calcule de factorial

  int u, l;
  float f = 1;
  do
  {
    printf("entre nombre \n");
    scanf("%d", &u);
  } while (u < 0);

  for (l = 1; l <= u; l++)
  {
    f = f * l;
  }
  printf("f= %d", f);

  //-----------------------------------------------------------------
  // la somme de 1+1/2+..............+1/n
  int c, x, sodiv = 0;
  printf("donner nombre");
  scanf("%d", &x);

  for (c = 0; c <= x; c++)
  {
    sodiv = sodiv + 1 / c;
  }
  printf("%d", sodiv);

  //-----------------------------------------------------------------
  // la somme de  1+3+5+7.................
  int imp, d, w, soimp = 0;
  printf("donner nombre");
  scanf("%d", &d);
  imp = 1;

  for (w = 1; w <= d; w++)
  {
    soimp = soimp + pow(imp, 2);
    imp = imp + 2;
  }
  printf("%d", soimp);

  //-----------------------------------------------------------------
  // Diviseurs d'un nombre
  int p, e;
  do
  {
    printf("entre nombre \n");
    scanf("%d", &e);
  } while (e < 0);

  for (p = 1; p <= e; p++)
  {
    if (e % p == 0)
    {
      printF("%d diviseurs de le nombre %d", p, e);
    }
  }
  //--------------------------------------------------------------
  //

  return 0;
}