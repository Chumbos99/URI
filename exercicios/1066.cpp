#include <iostream>
#include <math.h>
int main(){
    int cont, pos=0, neg=0, par=0, impar=0, num;
    
    for(cont=0; cont<5;cont++){
        scanf("%d",&num);
        if(num>0){
            pos++;
        }
        if(num<0){
            neg++;
        }
        if(num%2==0){
            par++;
     
        }
        if(num%2!=0){
            impar++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
 
    return 0;
}