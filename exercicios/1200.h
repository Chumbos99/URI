#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef int tp_item;

typedef struct tp_no{
    struct tp_no *esq;
    tp_item info;
    struct tp_no *dir;
} tp_no;

typedef tp_no *tp_arvore;

tp_arvore inicializa_arvore(){
    return NULL;
}

char arvore_vazia(tp_arvore raiz){
    if(raiz==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

tp_no *aloca_no(){ //aloca e retorna o endereco
    tp_no *no;
    no=(tp_no*)malloc(sizeof(tp_no));
    return no;
}
int espaco;
int insere_no(tp_arvore *raiz, tp_item info){
    tp_no *pai=NULL, *novo, *aux = *raiz;
    novo = aloca_no();
    if(!novo) return 0;
    novo->info = info;
    novo->esq = NULL;
    novo->dir = NULL;
    while(aux != NULL){
        pai = aux;
        if(info < aux->info){
            aux = aux->esq;
        }else{
            aux = aux->dir;
        }
    }
    
    
    if(pai != NULL){
        if(info < pai->info){
            pai->esq = novo;
        }
        else{
            pai->dir = novo;
        }
    }
    else{
        *raiz = novo;
    }
    return 1;
}
void pre_ordem(tp_no *p){//imprimi os elementos en pre-ordem
    if(p!=NULL){
        if(espaco!=1) printf(" %d",p->info);
        else{
            printf("%d",p->info);
            espaco=0;
        }
        pre_ordem(p->esq);
        pre_ordem(p->dir);
        
    }
}
void em_ordem(tp_no *p){//imprimi os elementos em ordem
    if(p!=NULL){
        em_ordem(p->esq);
        if(espaco!=1) printf(" %d",p->info);
        else{
            printf("%d",p->info);
            espaco=0;
        }
        em_ordem(p->dir);
    }
}
void pos_ordem(tp_no *p){//imprimi os elementos em pós-ordem
    if(p!=NULL){
        pos_ordem(p->esq);
        pos_ordem(p->dir);
        if(espaco!=1) printf(" %d",p->info);
        else{
            printf("%d",p->info);
            espaco=0;
        }
    }
}
tp_arvore busca_no_recursiva(tp_arvore p, tp_item e){
    if(p!=NULL){
        if(e<p->info){
            return busca_no_recursiva(p->esq,e);
        }
        else{
            if(e>p->info){
                return busca_no_recursiva(p->dir,e);
            }
            else{
                printf("%d existe\n",e);
                return (p);
            }
        }
    }
    else {
        printf("%d nao existe\n",e);
        return (NULL);
    }
}
int remove_no (tp_arvore *raiz, tp_item e ) {
	tp_no  *p=*raiz,   *ant=NULL,   *sub,   *pai,   *filho;
	while (p!=NULL && p->info!=e) {
		ant=p;
		if (e < p->info)
			p = p->esq;
		else
			p = p->dir;
	}
	if (p==NULL) /* não encontrou */
		return  0;
	/* nó tem no máximo um filho */
	if (p->esq==NULL)
		sub=p->dir;
	else
		if (p->dir==NULL)
			sub=p->esq;
		else {
		/* nó tem dois filhos */
			pai=p; sub=p->dir; filho=sub->esq;
			while (filho!=NULL) {
				pai=sub;  sub=filho;  filho=sub->esq;
			}
            /* neste ponto, sub é o sucessor em ordem de p */
			if (pai!=p) {
				/*p não é o pai de sub e sub==pai->esq */
				pai->esq=sub->dir;
				/* remove o nó apontado por sub de sua atual 
				 posição e substitui pelo filho direito de rp */
				/* sub ocupa o lugar de p */
				sub->dir=p->dir;
			}
		/*define filho esq de sub para que sub ocupe o lugar de p */
			sub->esq=p->esq;
		}
		/* insere sub na posição ocupada por p */
		if (ant==NULL)
			*raiz=sub; /* p era raiz */
		else
			if (p==ant->esq)
				ant->esq=sub;
			else
				ant->dir=sub;
		free(p);
	return 1;
}