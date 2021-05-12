#include "1200.h"
int main(){
    tp_arvore raiz = inicializa_arvore();
    char S[30], C;
while(scanf(" %s",S)!=EOF){
    getchar();
    if(strcmp(S,"I")==0){
        scanf("%c",&C);
        insere_no(&raiz,C);
    }
    else if(strcmp(S,"P")==0){
        scanf("%c",&C);
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
     
}
    return 0;
}