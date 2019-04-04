/* 
 * Name of file   : insert.h
 * Name of author : Daix Wap
 * Role           : content prototypes functions read the graph
 * Date of create : 18-mar-19
 */

#ifndef DEF_INS
#define DEF_INS
    /* include file */
    #include "Constant.h"
    #include "drew.h"

    /* prototypes */
    Status* GitGraphe();
    Arc** createTable(int width, int lenght);
    int   addArc(Arc **Graphe, int nbs);
    void freeGraphe(Arc **Graphe, int size);
    
    


#endif // DEF_INS