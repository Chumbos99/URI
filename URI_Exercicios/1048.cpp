#include <iostream>
#include <math.h>
int main(){
    double aumento, reajuste, salario;
    int percentual;
    scanf("%lf",&salario);
    if(salario>=0&&salario<=400){
        aumento=salario+(salario*0.15);
        reajuste=salario*0.15;
        percentual=15;
    }
    if(salario>400&&salario<=800){
            aumento=salario+(salario*0.12);
            reajuste=salario*0.12;
            percentual=12;
    }
    if(salario>800&&salario<=1200){
        aumento=salario+(salario*0.10);
        reajuste=salario*0.10;
        percentual=10;
    }
    if(salario>1200&&salario<=2000){
        aumento=salario+(salario*0.07);
        reajuste=salario*0.07;
        percentual=7;
    }
    if(salario>2000){
        aumento=salario+(salario*0.04);
        reajuste=salario*0.04;
        percentual=4;
    }
    printf("Novo salario: %.2lf\n",aumento);
    printf("Reajuste ganho: %.2lf\n",reajuste);
    printf("Em percentual: %d %\n",percentual);





    return 0;
}