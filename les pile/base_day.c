#include <stdlib.h>
#include <stdio.h>

typedef struct maillon {
    int v;
    struct maillon *suiv;
} maillon;
typedef maillon *pile;

void Initpile(pile *p)
{
    *p = NULL;
}

void allouer(pile *p)
{
    *p = (pile) malloc(sizeof(maillon));
}

int sommet(pile p)
{
    return p->v;
}

pile suiv(pile p)
{
    return p->suiv;
}

void aff_suiv(pile p, pile q)
{
    p->suiv = q;
}

void aff_val(pile p, int x)
{
    p->v = x;
}

void liberer(pile p)
{
    free(p);
}

int pile_vide(pile p)
{
    return p == NULL;
}

void empiler(pile *p, int x)
{
    pile q;
    allouer(&q);
    q->v = x;
    q->suiv = *p;
    *p = q;
}

void depiler(pile *p, int *x)
{
    if (!pile_vide(*p))
    {
        *x = (*p)->v;
        pile q = *p;
        *p = (*p)->suiv;
        free(q);
    }
}

void affiche(pile p)
{
    if (pile_vide(p))
    {
        printf("La pile est vide\n");
        return;
    }
    pile q = p;
    while (q!= NULL)
    {
        printf("%d -> ", q->v);
        q = q->suiv;
    }
    printf("NULL\n");
}



int main()
{
    pile p;
    Initpile(&p);
    int taille, x;
    printf("Donnez le nombre d'elements dans la pile: ");
    scanf("%d", &taille);
    while (taille > 0)
    {
        printf("L'element de la pile: ");
        scanf("%d", &x);
        empiler(&p, x);
        taille--;
    }
    printf("La pile est: ");
    affiche(p);
    while (!pile_vide(p))
    {
        printf("L'element en haut de la pile est: %d\n", sommet(p));
        depiler(&p, &x);
        printf("L'element supprimé de la pile est: %d\n", x);
        printf("La pile est: ");
        affiche(p);
    }
    return 0;
}