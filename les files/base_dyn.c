#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct maillon
{
    int val;
    struct maillon *suiv;
} Maillon;

typedef struct file
{
    Maillon *tete;
    Maillon *queue;
} file;

void initfile(file *f)
{
    f->tete = NULL;
    f->queue = NULL;
}

void allouer(file *f)
{
    f->tete = (Maillon *)malloc(sizeof(Maillon));
    f->queue = f->tete;
}

int val(file f)
{
    return f.tete->val;
}

// file suiv(file f) {
//   return (f.tete)->suiv;
//}

void aff_suiv(file f, file p)
{
    f.tete->suiv = p.tete;
}

void aff_val(file f, int x)
{
    f.tete->val = x;
}

void liberer(file f)
{
    Maillon *P = f.tete;
    while (P != NULL)
    {
        Maillon *Q = P->suiv;
        free(P);
        P = Q;
    }
}

int fileVide(file f)
{
    return f.tete == NULL;
}

void defiler(file *f, int *X)
{
    if (!fileVide(*f))
    {
        Maillon *P = f->tete;
        *X = P->val;
        f->tete = P->suiv;
        if (f->tete == NULL)
        {
            f->queue = NULL;
        }
        free(P);
    }
}

void enfiler(file *f, int X)
{
    Maillon *P = (Maillon *)malloc(sizeof(Maillon));
    P->val = X;
    P->suiv = NULL;
    if (!fileVide(*f))
    {
        f->queue->suiv = P;
    }
    else
    {
        f->tete = P;
    }
    f->queue = P;
}
file supp(file f)
{
    int n, n1;
    file fr;
    initfile(&fr);
    if (fileVide(f))
    {
        return f;
    }
    else
    {
        while (!fileVide(f))
        {
            defiler(&f, &n);
            enfiler(&fr, n);
            defiler(&f, &n1);
            if (n = n1)
            {
                defiler(&f, &n1);
            }
            else
            {
                enfiler(&fr, n1);
            }
        }
    }
    return fr;
}

int main()
{
    file f;
    initfile(&f);
    int taille;
    printf(" donner le nombre qui vous tapier dans la file f : \n ");
    scanf("%d", &taille);
    int n;
    while (taille > 0)
    {
        printf(" l'element de file   ");
        scanf("%d", &n);
        enfiler(&f, n);
        taille--;
    }

    // printf("la file sans doublement :\n %d \t",supp(f));
    int x;
    defiler(&f, &x);
    printf("%d\n", x);
    defiler(&f, &x);
    printf("%d\n", x);
    defiler(&f, &x);
    printf("%d\n", x);
    liberer(f);
    return 0;
}