#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef char tp_item;

typedef struct tp_no{
    struct tp_no *esq;
    tp_item info;
    struct tp_no *dir;
    char letra;
} tp_no;

typedef tp_no *tp_arvore;

tp_arvore inicializa_arvore(){
    return NULL;
}


tp_no* novoNo(char letra)//alloca um espaço da memoria para a letra  e retornar o novo no criado
{

	tp_no *aux = (tp_no *) malloc(sizeof(tp_no));
	aux->letra = letra;
	aux->esq = aux->dir = NULL;

	return aux;
}
void pos_ordem(tp_no *aux){//imprimi os elementos em pós-ordem
    if(aux== NULL)
        return;
    pos_ordem(aux->esq);
    pos_ordem(aux->dir);
    printf("%c",aux->letra);
    
}

int percorre_vetor(char *vetor, int inicio, int fim, char letra){//percorre o vetor procurando a letra passada como parametro
    int i;
    for(i=inicio;i<=fim; i++){
        if(vetor[i]==letra) 
            return i;
    }
    return -1;
}
short indice;
tp_no* root(char *infixa, char *prefixa, int comeco, int fim){
    int indice_infixa;
    if(comeco >fim)//verifica se ela ta tentando acessar uma folha em que os filhos nao existem
         return NULL;

    tp_no* aux = novoNo(prefixa[indice++]);

    if(comeco == fim) //verfica se é igual, para descubrir se o novo no é uma folha ou não
        return aux;
// recurções para retornar as raizes da arvore
    indice_infixa = percorre_vetor(infixa, comeco, fim, aux->letra);
	aux->esq = root(infixa, prefixa, comeco, indice_infixa - 1);
	aux->dir = root(infixa, prefixa, indice_infixa + 1, fim);

    return aux;
}

