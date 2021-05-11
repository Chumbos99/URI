#include <iostream>
#include <math.h>
int main(){
    double aumento, reajuste, renda;
    int percentual;
    scanf("%lf",&renda);
    if(renda>=0&&renda<=2000){
         printf("Isento\n");
    }
    else{
        renda-=2000;
        if(renda<=1000){
                aumento=renda*0.08;
                printf("R$ %.2lf\n",aumento);
        }
        else{
            
            renda-=1000;
            if(renda<=1500){
                aumento=renda*0.18;
                printf("R$ %.2lf\n",aumento+80);
            }
            else{
                renda-=1500;
                aumento=renda*0.28;
                printf("R$ %.2lf\n",aumento+350);
            }
        }
    }
    





    return 0;
}