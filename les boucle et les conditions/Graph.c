#include <stdio.h>

int main()
{

  printf("    1 ====== CAREE DE *\n");
  printf("    2 ======  CADRE DE  CAREE DE *\n");
  printf("    3 ====== CAREE DE *\n");
  printf("    4 ====== TRIANGLE  *\n");
  printf("    5 ====== CAREE DE X *\n");
  printf("    6 ====== LOSANGE  *\n");
  //--------------------------------------------------
  //
  int a, b, i, j;
  printf("Donner a =\n");
  scanf("%d", &a);
  printf("Donner b =\n");
  scanf("%d", &b);

  for (i = 0; i < a; i++)
  {
    for (j = 0; j < b; j++)
    {
      printf(" * ");
    }
    printf("\n");
  }

  //--------------------------------------------------
  //
  int c, d, I, J;
  printf("Donner c =\n");
  scanf("%d", &c);
  printf("Donner d =\n");
  scanf("%d", &d);

  for (I = 1; I <= c; I++)
  {
    for (J = 1; J <= d; J++)
    {
      if ((J == 1 || J == d) || I == 1 || I == c)
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  //--------------------------------------------------
  //
  int e, f, g;
  printf("Donner g =\n");
  scanf("%d", &g);

  for (e = 0; e <= g; e++)
  {
    for (f = 0; f <= e; f++)
    {
      printf("*");
    }
    printf("\n");
  }

  //--------------------------------------------------
  //
  int h, k, l;
  printf("Donner h =\n");
  scanf("%d", &h);

  for (l = 1; l <= h; l++)
  {
    for (k = 1; k <= h; k++)
    {
      if (l == 1 || l == h || k == 1 || k == h || k == l || k == h - l + 1)
      {
        printf("* ");
      }
      else
      {
        printf("  ");
      }
    }
    printf("\n");
  }

  //--------------------------------------------------
  //
  int n, q, p;
  printf("Donner N =\n");
  scanf("%d", &n);

  for (q = 1; q <= n; q++)
  {
    for (p = 1; p <= n - q; p++)
    {
      printf(" ");
    }
    for (p = 1; p <= n; p++)
    {
      printf("*");
    }
    printf("\n");
  }

  //--------------------------------------------------
  //
  int z, Q, P;
  printf("Donner z =\n");
  scanf("%d", &z);

  for (Q = 1; Q <= n; Q++)
  {
    for (P = 1; P <= z - Q; P++)
    {
      printf(" ");
    }
    for (P = 1; P <= (2 * Q - 1); P++)
    {
      printf("*");
    }
    printf("\n");
  }

  //--------------------------------------------------
  //
  int D, E, S, V;
  printf("Donner z =\n");
  scanf("%d", &S);
  V = 1;
  for (D = 1; D <= (2 * S - 1); D++)
  {
    for (E = 1; E <= V; E++)
    {
      printf("* ");
    }
    if (D < S)
    {
      V++;
    }
    else
    {
      V--;
      printf("\n");
    }
  }

  return 0;
}