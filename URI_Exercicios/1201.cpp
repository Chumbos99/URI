#include "1200.h"
int main(){
    tp_arvore raiz = inicializa_arvore();
    int C;
    char S[30];
while(scanf(" %s",S)!=EOF){
    
    if(strcmp(S,"I")==0){
        scanf("%d",&C);
        insere_no(&raiz,C);
    }
    else if(strcmp(S,"P")==0){
        scanf("%d",&C);
        busca_no_recursiva(raiz,C);
    }
    else if(strcmp(S,"PREFIXA")==0){
        espaco=1;
        pre_ordem(raiz);
        printf("\n");
    }
    else if(strcmp(S,"POSFIXA")==0){
        espaco=1;
        pos_ordem(raiz);
        printf("\n");
    }
    else if(strcmp(S,"INFIXA")==0){
        espaco=1;
        em_ordem(raiz);
        printf("\n");
    }
    else if(strcmp(S,"R")==0){
        remove_no(&raiz,C);
 
    }
     
}
    return 0;
}