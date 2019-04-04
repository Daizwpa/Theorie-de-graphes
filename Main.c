/* 
 * Name of file   : Main.c
 * Name of author : Daix Wap
 * Role           : main file 
 * Date of create : 18-mar-19
 */
#include "Constant.h"
#include "insert.h"
#include "search.h"

void main() {
    /* delcarations */
    bool view = false;
    int x = 0;
    Status *staG = NULL;

    /* code */
    printf("<------------[ Theorie de graphes ]------------>");
    while(!view){
        /* menu */
        printf("\n1- siser Graphe.");
        printf("\n2- il existe une relation de connexite.");
        printf("\n3- La recherche des composantes connexes");
        printf("\n0- exit.");
        printf("\nQu'aimez-vous : ");

        /* select */
        scanf("%d", &x);

        switch(x){
        case 1:
            /* Get Graphe */
            staG = GitGraphe();
            break;
        case 2:
            if (staG != NULL){
              staG->connexe =  isConnexe(staG);
              if(staG->connexe){
                  printf("Graphe est connexte");
              }else
              {
                  printf("Graphe est Non connexte");
              }
                
            }else{
                printf("Error !!!\npas trouve Graphe");
            }

            break;
        
        case 3:
            /* La recherche des composantes connexes */
            
            if (staG != NULL){

            }else{
                printf("Error !!!\n pas trouvé Graphe");
            }
            
            break;
            
        case 0:
            view = true;
            break;

        default :

            break;

        }// end switch()


    }// end while()


}// end main()