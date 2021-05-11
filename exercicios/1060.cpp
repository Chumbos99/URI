#include <iostream>
int main(){
    int cont, qnt;
    double num, media, positivo;
    for(cont=0; cont<6;cont++){
        scanf("%lf",&num);
        if(num>0){
            qnt++;
            positivo+=num;
        }
    }
    printf("%d valores positivos\n", qnt);
    printf("%.1lf\n", media=(positivo/qnt));
    return 0;
}