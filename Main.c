/* 
 * Name of file   : Main.c
 * Name of author : Daix Wap
 * Role           : main file 
 * Date of create : 18-mar-19
 */
#include "Constant.h"
void main() {
    /* delcarations */
    bool view = false;
    int x = 0;
    Arc **Graphe = NULL;

    /* code */
    printf("<------------[ Theorie de graphes ]------------>")
    while(!view){
        /* menu */
        printf("\n1- siser Graphe.");
        printf("\n2- La recherche des composantes connexes:")

        /* select */
        scanf("%d", &x);

        switch(x){
        case 1:
            /* Git Graphe */
            Graphe = GitGraphe();  
            break
    
        case 2:
            /* La recherche des composantes connexes */
            if (Graphe != NULL){

            }else{
                printf("\nError !!!\n pas trouvé Graphe");
            }
            
            break;

        default :
            
            break;

        }// end switch()


    }// end while()


}// end main()