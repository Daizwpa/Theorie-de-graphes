/* 
 * Name of file   : drew.c
 * Name of author : Daix Wap
 * Role           : content  functions Drew the graph
 * Date of create : 02-aprel-19
 */
#include "drew.h"

void DrewGraphe(Arc **Graphe, int nbs){
    /* Drew Table Graphe */
    for(int i = 0; i<nbs; i++){
        for(int j = 0; j<nbs; j++){
            if(Graphe[i][j].value != 0){
                printf("\n%d -------(%d)-------> %d", i, Graphe[i][j].value, j);
            }
        }
    }

}// end DrewGraphe()