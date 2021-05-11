#include "1191.h"
int main(){
    tp_arvore raiz = inicializa_arvore();
    char prefixa[30], infixa[30];
    //int indice;
while(scanf(" %s %s",prefixa, infixa)!=EOF){
    int tam = strlen(prefixa);
		indice = 0;
		tp_arvore no = root(infixa, prefixa, 0, tam - 1);
		pos_ordem(no);
		printf("\n");
    
}
    return 0;
}