#include <stdio.h>
#include <stdlib.h>

int main()
{
  ////////////////////////////////////////////////////////////////
  printf("****************Menu************************************************\n");
  printf(" 1 # compare age . \n ");
  printf(" 2 # calcule age .\n");
  printf(" 3 # calculator .\n");
  printf(" 4 # La valeur absule ");
  printf(" 3 # Le max et le min ");
  printf(" 5 # le sign de number");

  //----------------------------------------------------------------
  // compare age  utilisateur and age 40

  const int n = 40;
  int age;
  printf("your age :\n");
  scanf("%d", &age);
  if (age > n)
  {
    printf("your age max for 40 \n ");
  }
  else
  {
    printf("your age min for 40 \n");
  }
  //----------------------------------------------------------------
  // calcule age d'utilisateur

  int year1, year2, oldyear;

  printf("THE YEAR of your born \n");
  scanf("%d", &year1);
  printf("THE YEAR currently");
  scanf("%d", &year2);

  oldyear = year2 - year1;
  printf("%d Old year", oldyear);

  //----------------------------------------------------------------
  // calculator

  int data1, data2;
  char op;

  printf("enter l'operateur \n");
  scanf("%c", &op);

  printf("enter the first number \n");
  scanf("%d", &data1);

  printf("enter the second number \n");
  scanf("%d", &data2);

  switch (op)
  {
  case '+':
    printf("%d + %d = %d\n", data1, data2, data1 + data2);
    break;
  case '-':
    printf("%d - %d = %d\n", data1, data2, data1 - data2);
    break;
  case '*':
    printf("%d + %d = %d\n", data1, data2, data1 * data2);
    break;
  case '/':
    printf("%d / %d = %d\n", data1, data2, data1 / data2);
    break;
  default:
    printf("error");
  }

  //----------------------------------------------------------------
  // La valeur absule

  int c, h;

  printf("enter nombre :\n");
  scanf("%d", &c);

  if (c < 0)
  {
    h = -c;
  }
  else
  {
    h = c;
  }
  printf(" | %d | = %d \n", c, h);

  //----------------------------------------------------------------
  // Le max et le min

  int en1;
  int en2;

  printf("enter two numbers :\n");
  scanf("%d       %d", &en1, &en2);
  if (en1 > en2)
  {
    printf("la max est : %d\n", en1);
  }
  else
  {
    printf("la max est : %d\n", en2);
  }

  //----------------------------------------------------------------
  // Le sign de deux number
  int nombre1, nombre2;
  printf("typier deux nombre ");
  scanf("%d ", &nombre1);
  scanf("%d ", &nombre2);

  if (nombre1 * nombre2 > 0)
  {
    printf("le meme sign");
  }
  else
  {
    printf("n'est pas le meme sign");
  }

  return 0;
}