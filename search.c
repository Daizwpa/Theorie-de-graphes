/* 
 * Name of file   : search.c
 * Name of author : Daix Wap
 * Role           : content  functions search
 * Date of create : 03-aprel-19
 */
#include "search.h"

bool isConnexe(Status *staG){
    /* this function search the Graphe then tell us is it connexe or not connexe */

    bool good = true, new = true;
    Arc **CGraphe = createTable(staG->NbSommet, staG->NbSommet);

    ConvNONV(CGraphe, staG);// for convert graphe to non orinté

    while(new){
        new = false;
        for(int i =0; i<staG->NbSommet; i++){
            if(CGraphe[0][i].value == 1){
                for(int j=0; j<staG->NbSommet; j++){
                    if(CGraphe[i][j].value == 1){
                        if(CGraphe[0][j].value == 0){
                            new = true;
                            CGraphe[0][j].value = 1;
                        }

                    }
                }
            }
        }
    }

    // scan resulte
    for(int i = 0; i<staG->NbSommet; i++){
        if(CGraphe[0][i].value == 0){
           freeGraphe(CGraphe, staG->NbSommet);
           return false;
        }
    }
    
    freeGraphe(CGraphe, staG->NbSommet);
    return true;
}// isConnexe()