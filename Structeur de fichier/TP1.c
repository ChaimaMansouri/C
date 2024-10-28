#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_TAILLE 50

typedef struct pays {
    char nom[20], capital[20];
    float nbrattbitants;
} pays;

typedef struct bloc {
    pays tab[10];
    int nbr_block;
} t_bloc;

typedef struct entete {
    int t_entete[5];
    int nb_carc;
} t_entete;

typedef struct fichier {
    FILE* F;
    t_entete ent;
    t_bloc buffer;
} fichier;

// Ouvrir fichier
fichier* ouvrir(const char* nom, char mode)
{
    fichier* p = malloc(sizeof(fichier));
    // p est un pointeur qui pointe vers le début de la mémoire allouée pour la structure fichier.
    if (mode == 'A' || mode == 'a') {
        p->F = fopen(nom, "r+");
        if (p->F == NULL)
            perror("probleme dans fopen");
    } else {
        if (mode == 'N' || mode == 'n') {
            p->F = fopen(nom, "w+");
            if (p->F == NULL)
                perror("probleme dans fopen");
        }
    }
    return p;
}

// Lecture du bloc de i-ème numéro dans le buffer
void lireDir(fichier* f, int i, t_bloc* buf)
{
    fseek(f->F, (sizeof(t_entete) + (i - 1) * sizeof(t_bloc)), SEEK_SET);
    // Pour déplacer le curseur de position dans un fichier
    // La valeur de déplacement à appliquer au curseur de position ET le décalage en fonction du numéro de bloc i.
    // SEEK_SET indique que le déplacement doit être effectué à partir du début du fichier.
    fread(buf, sizeof(t_bloc), 1, f->F);
}

// Écriture dans le bloc
void ecrireDir(fichier* f, int i, t_bloc* buf)
{
    fseek(f->F, sizeof(t_entete) + (i - 1) * sizeof(t_bloc), SEEK_SET);
    fwrite(buf, sizeof(t_bloc), 1, f->F);
}

// Si ajoute un bloc
void aff_entete(fichier* p, int i, int n)
{
    (p->ent).t_entete[i] = n;
}

// Lecture du contenu de l'entête
int entete(fichier* p, int i)
{
    return (p->ent).t_entete[i];
}

void ecrire_entete(fichier* p)
{
    fseek(p->F, 0, SEEK_SET); // Positionne le curseur de fichier au début
    fwrite(&(p->ent), sizeof(t_entete), 1, p->F);
}

// Allocation d'un nouveau bloc
int AllocBloc(fichier* p, int i)
{
    aff_entete(p, i, entete(p, i) + 1);
    return entete(p, i) + 1;
}

void afficher(const char* nom_fichier)
{
    FILE* fichier = fopen(nom_fichier, "r");
    if (fichier == NULL) {
        perror("Erreur lors de l'ouverture du fichier");
        return;
    }

    char ligne[1024];
    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        printf("%s", ligne);
    }

    fclose(fichier);
}

void initial_load(int n, const char* nom_fichier)
{
    int i, j, k;
    pays e;
    fichier* fp;
    j = 1;
    k = 1;
    fp = ouvrir(nom_fichier, 'N');
    printf("Donner les enregistrements :\n");
    for (i = 0; i < n; i++) {
        scanf("%f %s %s", &e.nbrattbitants, e.nom, e.capital);
        if (k <= 0.7 * 10) {
            fp->buffer.tab[k] = e;
            k++;
        } else {
            fp->buffer.nbr_block = k--;
            ecrireDir(fp, j, &(fp->buffer));
            j = j + 1;
            k = 1;
        }
    }
    if (k == 1) {
        aff_entete(fp, 1, j--);
    } else {
        aff_entete(fp, 1, j);
        fp->buffer.nbr_block = k--;
        ecrireDir(fp, j, &(fp->buffer));
    }
    aff_entete(fp, 2, j);
    fclose(fp->F);
    free(fp);
}
int main()
    {
        const char* nom_fichier = "data.txt";
        int n;
        float u = 0.7;
        int b = 10;

        printf("Combien d'enregistrements souhaitez-vous ajouter ? ");
        scanf("%d", &n);

        initial_load(n, nom_fichier);

        printf("Contenu du fichier :\n");
        afficher(nom_fichier);

        return 0;
    }