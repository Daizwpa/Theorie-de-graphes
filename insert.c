/* 
 * Name of file   : insert.c
 * Name of author : Daix Wap
 * Role           : content  functions read the graph
 * Date of create : 18-mar-19
 */
#include "insert.h"


Status* GitGraphe(){
    /* read the Graphe and return " La matrice associée " */
    
    /*initialize*/
    bool done = false, good = false;
    int x;
    Status *staG = NULL;

    /* create table status */
    staG = (Status*) malloc(sizeof(Status));
    if (staG == NULL) {
        exit(EXIT_FAILURE);
    }
    

    do{/* git number sommet and check value */
        printf("Quel est le nombre sommets: ");
        scanf("%d", &(staG->NbSommet));// hahahaha you can write &staG->NbSommet
        if(staG->NbSommet <= 0){
            printf("\nError!!!");
            printf("\nEssayez encore...");
            good = true;

        }else{
            printf("Bien!!!");
            good = false;
        }

    }while(good);

    /* Create Table */
    staG->Graphe = createTable(staG->NbSommet, staG->NbSommet);
    if (staG->Graphe == NULL){
        printf("\nMemory Error!!");
        exit(EXIT_FAILURE);
    }

    /* menu switch */
    while(!done){
        DrewGraphe(staG->Graphe, staG->NbSommet);
        printf("\n1- Ajouter nouvelle Arc.");
        printf("\n2- Exit.");
        printf("\nQu'aimez-vous: ");

        scanf("%d", &x);

        switch(x){
        case 1:
            if(addArc(staG->Graphe, staG->NbSommet)){
                printf("Error!!!");
            }

            break;
        case 2:
            done = true;
            break;

        default:

            break;
        }//end switch

    }//end while
    staG->fconnexe = false;
    staG->connexe = false;

    return staG;

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

    printf("Extremite initiale: ");
    scanf("%d", &ei);

    printf("Extermite terminale: ");
    scanf("%d", &et);

    printf("Ajoute value : ");
    scanf("%d", &x);

    if( (ei<0 || ei>=nbs) || (et<0 || et>=nbs) ){ return 1;}

    Graphe[ei][et].value = x;

    return 0;

}// addArc()