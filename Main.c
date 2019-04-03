/* 
 * Name of file   : Main.c
 * Name of author : Daix Wap
 * Role           : main file 
 * Date of create : 18-mar-19
 */
#include "Constant.h"
#include "insert.h"
void main() {
    /* delcarations */
    bool view = false;
    int x = 0;
    Arc **Graphe = NULL;

    /* code */
    printf("<------------[ Theorie de graphes ]------------>");
    while(!view){
        /* menu */
        printf("\n1- siser Graphe.");
        printf("\n2- La recherche des composantes connexes:");
        printf("\n0- exit.");
        printf("\nQu'aimez-vous : ");

        /* select */
        scanf("%d", &x);

        switch(x){
        case 1:
            /* Git Graphe */
            Graphe = GitGraphe();  
            break;
    
        case 2:
            /* La recherche des composantes connexes */
            if (Graphe != NULL){

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