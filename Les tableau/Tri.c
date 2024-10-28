#include<stdio.h>
#include<stdlib.h>

//**************************************************************
/*            
                  # Tri par comparaison :
                      1-tri par selection
                      2-tri par insertion
                      3-tri par bulles
                      4-tri par tas
                      6-tri par shell
                      
                  # Tri par diviser pour regner :
                      1-tri par fusion
                      2-tri par rapide
                      
                  # Tri par compatage :
                      1-tri par comptage
                      2-tri par base  

*/
//****************************************************************


void affichage(int t[6],int taille){
    int i ;
    for( i=0 ; i<taille ; i++) {
        printf("t[%d]=%d \n",i, t[i]);
    }
}
void echange (int *a , int *b){
    int tmp ;
    tmp = *a ;
    *a = *b ;
    *b =tmp ;
}

// 1-tri par selection    
      //****************** idée de utilise le plus petit element par le debut
void tri_par_selec(int t[6],int taille){
    int i , min_ind ,j ;
    for( i=0 ; i<taille-1 ; i++){
        min_ind=i ;
        for( j=i+1 ; j<taille ; j++){
            if(t[min_ind] > t[j]){
                min_ind=j ;
            }
        }
      echange(&t[min_ind],&t[i]);
    }
}

//2-tri par insertion
void tri_par_inser(int t[6], int taille){
    int i ,j , tmp ;
    for(i=1 ; i<taille ; i++){
        tmp=t[i];
        j= i-1;
        while (t[j]>tmp && j<=0)
        {
            t[j+1]=t[j];
            j--;
        }
        t[j+1]=tmp ;
    }
}

// 3-tri par bulles
     //*****************le plus grand element par la fin 
void tri_par_bulle(int t[6],int taille){
  int i;
  for( i=0 ; i<taille-1 ; i++){
    for( int j =0 ; j < (taille-i-1) ; j++){
        if(t[j]>t[j+1]){
            echange(&t[j],&t[j+1]);
        }
    }
  }
}

// 4-tri par tas
void tri_tas(int t[6] , int taille){
    for( int i =(taille/2)-1 ; i>=0 ; i--){
        tas(t,taille,i);
       for( i=taille-1 ;i>=0 ;i--){
        echange(&t[0],&t[i]);
        tas(t,i,0);
       }
    }
}
void tas(int t[6], int taille ,int i){
    int max_ind=i;
    int g=i*2+1;
    int d=i*2+2;
    if( g<taille && t[g]>t[max_ind]){
        max_ind=g;
    }
    if( d<taille && t[d]>t[max_ind]){
        max_ind = d;
    }
    if(max_ind!=i){
      echange(&t[i],&t[max_ind]);
      tas(t,taille,max_ind);
    }
}

// 6-tri par shell
void tri_par_shell(int t[6] , int taille){
    for (int vl =taille/2 ; vl > 0; vl=vl/2)
    {
      for ( int j=vl ; j < taille ; j++)
     {   
       for( int i=j-vl ;i>=0 ; i=i-vl){

         if(t[i]<=t[i+vl]){
            break;
         } 
          else{
            echange(&t[i],&t[i+vl]);
         } 
       }  
    
     }   
    }
    
}

int main(){
    int taille =6 ;
    int t[6]={ 20 , 16 ,5 , 8 , 0 , 15};

   affichage(t,taille);

    printf("1-tri par selection \n");
       tri_par_selec( t,taille);
       affichage(t,taille);
    printf("2-tri par insertion \n");
       tri_par_inser( t,taille);
       affichage(t,taille);
    printf("3-tri par bulles \n");
       tri_par_bulle( t,taille);
       affichage(t,taille);
    printf("4-tri par tas\n");
       tri_tas( t,taille);
       affichage(t,taille);
    printf("4-tri par Shell\n");
       tri_par_shell( t,taille);
       affichage(t,taille);
    return 0;
}


   