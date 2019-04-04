/* 
 * Name of file   : convert.c
 * Name of author : Daix Wap
 * Role           : content  functions convert 
 * Date of create : 03-aprel-19
 */
#include "conver.h"

void   ConvNONV(Arc **table, Status *staG){
    /* this convert Graphe to non orinte  and Non value*/
    for (int i = 0; i< staG->NbSommet; i++ ){
        for(int j = 0; j< staG->NbSommet; j++){
            if(staG->Graphe[i][j].value != 0){
                table[i][j].value = 1;
                table[j][i].value = 1;
            }
            
        }
    }

}// covertNorinte()