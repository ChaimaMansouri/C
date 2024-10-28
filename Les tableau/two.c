#include <stdio.h>
#include <math.h>

int main (){
      printf("****************************************************");
      printf("***** 1 ******programme qui calcule surface et perimetre de rectangle\n ") ;
      printf("***** 2 ***** Calcul de puissance \n");
      printf("***** 3 ***** Calcul le volume d'une sphere\n") ;
      printf("***** 4 ***** Calcul le volume d'une sphere\n ") ;
      printf("***** 5 ***** Programme echange two nombre \n") ;
      printf("***** 6 ***** Programme echange two nombre deuxeme methode \n") ;
      printf("***** 7 ***** Programme de hour \n") ;
      printf("***** 8 ***** Echange deux nombre si le meme sign et calcule la somme et le produit\n ") ;
      printf("***** 9 ***** Fature de Photocopiers \n") ;
      printf ("***** 10 ***** CALCULE LA MOYENNE est ecrire la romarque \n");
      printf ("***** 11 ***** Solution d'une equation du second degé \n");
      printf ("***** 12 ***** Pair et impair\n ");
      printf ("***** 13 ***** Les nombre premier \n ");
      printf ("***** 14 ***** nombre de chiffre de entier \n ");
      printf ("***** 15 ***** nombre inverse \n ");
      printf("**************************************************** \n");

    //----------------------------------------------------------------
    //programme qui calcule surface et perimetre de rectangle
      int l, r, s , p ;

    printf(" Entre le largeur et la longueur : \n ") ;
    scanf("%d \n  %d ", &l , &r) ;
     s=l*r ;     p=(l+r)*r ;
    printf("surface  : %d  \n  et permetre : %d \n", s, p) ;

    //----------------------------------------------------------------
    //Calcul de puissance 
    int x , y , puissance ;
    printf("entre le numero et le puissance : ");
    scanf ("%d ",&x) ;
    scanf ("%d ",&y) ;
     puissance =pow(x,y) ;
    printf("%d", puissance);

    //----------------------------------------------------------------
    //Calcul le volume d'une sphere 
     const float b =3.14 ;
     float t ;
     int r ;
     printf("enter le rayon :");
     scanf ("%d ",&r) ;
        t=(4*b*pow(r,3))/3 ;
    printf("volume :%d ",t) ;

    //----------------------------------------------------------------
    //Programme echange two nombre 
    int a , c  ,d;
    printf ("entre two nombre :");
    scanf ("%d ",&a) ;
    scanf ("%d ",&c) ;
      d=a ;
      a=c;
      c=d ;
      printf ( " a = %d \n  b =  %d", a ,c);
     
     //----------------------------------------------------------------
     //Programme echange two nombre deuxeme methode
     int m , k ;
    printf ("entre two nombre :");
    scanf ("%d ",&m) ;
    scanf ("%d ",&k) ;
       m = m+k ;
       k=m-k ;
       m = m - k ;
      printf ( " a = %d \n  b =  %d", m ,k);

     //----------------------------------------------------------------
     //Programme de hour 
     int time , h , min , sec;

     printf("le time :");
     scanf ("%d ",&time) ;
     h =time /3600 ;
     min = (time % 3600 )/ 60 ;
     sec = ((time % 3600 )% 60) ;
     printf("%d H : %d MIN : %d SEC  ", h, min, sec) ;

     //----------------------------------------------------------------
     //Echange deux nombre si le meme sign et calcule la somme et le produit
     int somme , produit , y , w  ;

     printf ("enter le premier number :");
     scanf ("% d", &y);
     printf("enter deuxieme nombre :");
     scanf("%d",&w);

     if ( y*w > 0 ){
          somme=y+w ;
          produit =y*w ;
          y=somme ;
          w=produit ;
     }
     printf(" y = %d   , w =%d", y,w);
    
     //----------------------------------------------------------------
     // Fature de Photocopiers 
     int photocopier  , facture ;

     printf("le nombre de photocopier ");
     scanf (" %d",&photocopier);

     if (photocopier <= 10) {
        facture = photocopier * 0.30 ;
     } else {
         if (photocopier <= 30){
           facture = 10 * 0.30 + (photocopier-10)*0.25 ;
         } else {
            facture = 10 * 0.30 + 20 *0.25 + (photocopier-30)*0.20 ;
         }
     }
       printf(" facteur = %d",facture);

     //-----------------------------------------------------------------
     // CALCULE LA MOYENNE est ecrire la romarque 
     int note1 , note2 , note3  , moyenne ;
     printf("note1");
     scanf("%d",&note1);
     printf("note2");
     scanf("%d",&note2);
     printf("note3");
     scanf("%d",&note3);

     moyenne=(note1 + note2 + note3);
     if( moyenne >= 16){
       printf("  TRES BIEN");
     }else {
        if ( moyenne < 16 && moyenne >= 14 )
        {
          printf("bien");
        } else { 
             if ( moyenne < 14 && moyenne >= 10 )
        {
          printf(" passable "); 
        }
        else {
           printf("insuffisant") ;
        }
        }
        

       //-----------------------------------------------------------------
       //Solution d'une equation du second degé 
         int delta , o ,z , u , SOUL1 , SOUL2 ;
         printf("o");
         scanf("%d",&o);
         printf("u");
         scanf("%d",&u);
         printf("z");
         scanf("%d",&z);

         delta = pow(u,2)-(4*o*z);
         if( delta < 0){
           printf("n'existe pas  une solution");
         }
         else 
         { if(delta = 0){
            SOUL1 = -u/2*o ;  printf("%d",SOUL1);
         } else {
            SOUL1= ((-u)-sqrt(delta)) /2*o  ;          printf("%d",SOUL1);
            SOUL2 =((-u)+ sqrt(delta)) /2*o  ;          printf("%d",SOUL2);
         }
          printf("%d",SOUL1);

         }


         //-------------------------------------------------------------------
         //Année bissextile 
           int  annee ;
         printf("enter l'annee ");
         scanf("%d" ,&annee);
          if ( annee % 400 ==0 || ( annee % 100 !=0  && annee %4 == 0) ){
            printf(" year bissextile ");
          }else {
              printf("n'est pas bissextile ");
          }
         
         //------------------------------------------------------------------
         //Pair et impair 
          int q ;
          printf("enter une nombre ");
          scanf ("%d",&q);
          if (q%2==0){
            printf("le nombre %d est pair",q);
          }else {
              printf("le nombre %d est impair",q);
          }

         //------------------------------------------------------------------
         //Les nombre premiére 
         int e , t ,estpremier ;
         printf("entre une nombre ");
         scanf("%d",&t);
          
          for( e=2 ; e<=t/2 ; e++){
              if(t%e ==0){
                estpremier=0;
                break ;
              }
          }            //le nombre premier divise sur 1 et lui_meme
          if(estpremier==1){
            printf("%d est un nombre premier ",t);
          }else {
                printf("%d n'est pas un nombre premier ",t);
          }
       
         //--------------------------------------------------------------------
         //nombre de chiffre de entier
            int ent , cmp=0  ;
            printf("enter une nombre \n") ;
            scanf("%d",&ent);
           while (ent != 0){
                ent = ent/10 ;
                cmp++;
            }
            printf("le nombre de chiffre %d",cmp); 
            
           
           //--------------------------------------------------------------------
           //nombre inverse 
            int num , invers=0 ;
            printf("enter une nombre \n") ;
            scanf("%d",&num);
            
            do{
                invers =(invers*10)+(num%10);
                num = num /10 ;
            }while(num!=0) ;
            printf("%d",invers);

           
    return 0;


}