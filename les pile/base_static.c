#include <stdlib.h>
#include <stdio.h>
#define max 100

typedef struct maillon {
    int t[max];
    int sommet;
} maillon;

typedef maillon *pile;

void initpile(pile p) {
    p->sommet = -1;
}

int pilevide(pile p) {
    return p->sommet == -1;
}

int pilepleine(pile p) {
    return p->sommet == max - 1;
}

void empiler(pile p, int x) {
    if (!pilepleine(p)) {
        p->sommet = p->sommet + 1;
        p->t[p->sommet] = x;
    } else
        printf("la pile pleine \n");
}

void depiler(pile p, int *x) {
    if (!pilevide(p)) {
        *x = p->t[p->sommet];
        p->sommet = p->sommet - 1;
    } else
        printf("la pile vide");
}

int sommet(pile p) {
    if (p != NULL) {
        return p->t[p->sommet];
    }
}
void affiche(pile p){
  while(!pilevide(p)){
    printf(" %d \n",sommet(p));
    p->sommet--;
  }
}

int main() {
    pile p = (pile)malloc(sizeof(maillon));
    initpile(p);
    int taille, x;
    printf("donner le nombre des éléments dans la pile \n");
    scanf("%d", &taille);
    while (taille > 0) {
        printf("l'élément de la pile :\n");
        scanf("%d", &x);
        empiler(p, x);
        taille--;
    }
    printf("la pile est  :\n");
      affiche(p);


  
    return 0;
}
