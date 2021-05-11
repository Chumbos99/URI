#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(){
    char string1[30], string2[30],string3[30];
    scanf(" %s",string1);
    scanf(" %s",string2);
    scanf(" %s",string3);
    if(strcmp(string1,"vertebrado")==0){
        if(strcmp(string2,"ave")==0){
            if(strcmp(string3,"carnivoro")==0){
                printf("aguia\n");
            }
            if(strcmp(string3,"onivoro")==0){
                printf("pomba\n");
            }
        }
        if(strcmp(string2,"mamifero")==0){
            if(strcmp(string3,"onivoro")==0){
                printf("homem\n");
            }
            if(strcmp(string3,"herbivoro")==0){
                printf("vaca\n");
            }
        }
    }
    if(strcmp(string1,"invertebrado")==0){
        if(strcmp(string2,"inseto")==0){
                    if(strcmp(string3,"hematofago")==0){
                        printf("pulga\n");
                    }
                    if(strcmp(string3,"herbivoro")==0){
                        printf("lagarta\n");
                    }
                }
                if(strcmp(string2,"anelideo")==0){
                    if(strcmp(string3,"hematofago")==0){
                        printf("sanguessuga\n");
                    }
                    if(strcmp(string3,"onivoro")==0){
                        printf("minhoca\n");
                    }
                }
    }
    return 0;
}