/* 
 * Name of file   : insert.c
 * Name of author : Daix Wap
 * Role           : content  functions read the graph
 * Date of create : 18-mar-19
 */
#include "insert.h"


Arc** GitGraphe(){
    /* read the Graphe and return " La matrice associée " */
    
    /*initialize*/
    bool done = false, good = false;
    int  nbSommet = 0;
    int x;
    Arc **Graphe = NULL;

    do{/* git number sommet and check value */
        printf("Quel est le nombre sommets: ");
        scanf("%d", &nbSommet);
        if(nbSommet <= 0){
            printf("\nError!!!");
            printf("\nEssayez encore...\n");
            good = true;

        }else{
            printf("\nBien!!!");
            good = false;
        }

    }while(good);

    /* Create Table */
    Graphe = createTable(nbSommet, nbSommet);
    if (Graphe == NULL){
        printf("\nMemory Error!!");
        exit(EXIT_FAILURE);
    }

    /* menu switch */
    while(!done){
        DrewGraphe(Graphe, nbSommet);
        printf("\n1- Ajouter nouvelle Arc.");
        printf("\n2- Exit.");
        printf("\nQu'aimez-vous: ");

        scanf("%d", &x);

        switch(x){
        case 1:
            if(addArc(Graphe, nbSommet)){
                printf("\nError!!!");
            }

            break;
        case 2:
            done = true;
            break;

            break;
        default:

            break;
        }//end switch

    }//end while

    return Graphe;

}// end GitGraphe()

Arc** createTable(int width, int lenght){
    /* create table */
    Arc **Graphe = NULL;

    Graphe = (Arc**) malloc(lenght*sizeof(Arc*));
    if(Graphe == NULL){ return NULL; }

    for(int i = 0; i<lenght; i++){
        Graphe[i] = NULL;
        Graphe[i] = (Arc*) malloc(width*sizeof(Arc));
        if(Graphe[i] == NULL){ return NULL; }

        for(int j = 0; j<width; j++){// initialize table
            Graphe[i][j].value = 0;
        }
    }

    return Graphe;
}// end createTable()

int addArc(Arc **Graphe, int nbs){
    /* add arc in table Graphe */
    int ei, et;
    int x; // for get value arc

    printf("\nExtremite initiale: ");
    scanf("%d", &ei);

    printf("\nExtermite terminale: ");
    scanf("%d", &et);

    printf("\nAjoute value : ");
    scanf("%d", &x);

    if((ei<0&& ei>=nbs)||(et<0&& et>=nbs) ){ return 1;}
    Graphe[ei][et].value = x;

    return 0;

}// addArc()