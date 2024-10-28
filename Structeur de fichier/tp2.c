#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//les index de tableau
#define nbrbloc 0;
#define nbr_enrg 1;
#define modifier 2;

typedef struct {
    char num[10] , nom[10], prenom[10];
    float credit;
}telephone;

typedef struct {
    telephone tab[100];
    int nbr_de_tel;
}bloc;

typedef struct{ 
    long tab_car[10];
    int nbr_car;
    //long nbrbloc , numenrg;
}entete;

typedef struct Tfichier {
    FILE* F;
    bloc buff;
    entete e;
}Tfichier;

void ouvrir (Tfichier *f , char M ,char* nom_fichier){
    if(M=='N'){
       f->F =fopen(nom_fichier,"w+b");
    }else
    if(M=='A'){
      f->F =fopen(nom_fichier,"r+b");
      //pour lire entete d'aprés la mc
      fread(&f->e,sizeof(entete),1,f->F);
    } 
}

void fermer(Tfichier f){
    if(f.e.tab_car[2]==1){
        f.e.tab_car[2]=0;
        fseek(f.F)
    }
}



 

