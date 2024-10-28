
#include <stdlib.h>
#include <stdio.h>

struct maillon {
    int v;
    struct maillon* suiv;
};
typedef struct maillon* liste;

void initListe(liste* l) {
    *l = NULL;
}

void allouer() {
    *l=(liste)malloc(sizeof(struct maillon));
}

int val(liste l) {
    return l->v;
}

liste suiv(liste l) {
    return l->suiv;
}

void aff_suiv(liste l, liste p) {
    l->suiv = p;
}

void aff_val(liste l, int x) {
    l->v = x;
}

void liberer(liste l) {
    free(l);
}

void ins_debut(liste* l, int v) {
    liste P ;
     allouer(P);
     aff_val(P, v);
     aff_suiv(P, *l);
    *l = P;
}

void ins_fin(liste* l, int v) {
    liste p ;
    allouer(p);
    aff_val(p, v);
    aff_suiv(p, NULL);
    if (*l == NULL) {
        *l = p;
    } else {
        liste q = *l;
        while (suiv(q) != NULL) {
            q = suiv(q);
        }
        aff_suiv(q, p);
    }
}

void supremer(liste* l, int v) {
    liste p = *l;
    liste prec = NULL;
    while (p != NULL && v != val(p)) {
        prec = p;
        p = suiv(p);
    }
    if (p != NULL) {
        if (prec == NULL) {
            *l = suiv(p);
        } else {
            aff_suiv(prec, suiv(p));
        }
        liberer(p);
    }
}

void DetruireLLC(liste* l) {
    while (*l != NULL) {
        liste P = *l;
        *l = suiv(*l);
        liberer(P);
    }
}

liste CreerLLC(int n) {
    liste l;
    initListe(&l);
    int v;
    for (int i = 0; i < n; i++) {
        printf("Donner la valeur %d : ", i + 1);
        scanf("%d", &v);
        ins_debut(&l, v);
    }
    return l;
}

void aff(liste l) {
    while (l != NULL) {
        printf("%d", val(l));
        l = suiv(l);
        if (l != NULL) {
            printf(" -> ");
        } else {
            printf(" -> NULL");
        }
    }
    printf("\n");
}

int LongLLC(liste l) {
    int Cpt = 0;
    while (l != NULL) {
        Cpt++;
        l = suiv(l);
    }
    return Cpt;
}
void fct(liste*l, liste*T){
    liste S;
    if(suiv(*l)!=NULL){
       S= suiv(*l);
       aff_suiv(*l,NULL);
       fct(&S, T);
       aff_suiv(S,*l);
    }
    else
      *T= *l;
}

int main() {

    liste l ,t;
    initListe(&l);
    initListe(&t);
    
    //La taille de liste 
    int n;
    printf("Donner le nombre d'elements à taper dans la LLC :\n");
    scanf("%d", &n);
   
    // Crée un liste l
    l = CreerLLC(n);
    ins_fin(&l,10);
   
    //Affichage
    printf("Affichage :\n");
    aff(l);

    //Supremer he nombre qui donnée
    int v ;
    printf("donner le nombre \n");
    scanf("%d",&v);
    supremer(&l,v);
    aff(l);

    // LE nombre des élément dans la llc 
    printf("le nombre des valeur dans la liste est :  %d\n",LongLLC(l));
    
    // Libérer la mémoire avant de quitter
    // DetruireLLC(&l);
    // Inverse la liste l
    printf(" la liste inverse :\n");
    fct(&l,&t);
    aff(t);

    return 0;
}
