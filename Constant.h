/* 
 * Name of file   : Constant.h
 * Name of author : Daix Wap
 * Role           : constant edit 
 * Date of create : 18-mar-19
 */

#ifndef DEF_Const
#define DEF_Const
    /* include file */
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdbool.h>

    /* structure */
    typedef struct{
        int value;
    }Arc;
    
    typedef struct{
        Arc **Graphe;
        int NbSommet;
        bool connexe;
        bool fconnexe;
    }Status;

    

    



#endif // DEF_Const