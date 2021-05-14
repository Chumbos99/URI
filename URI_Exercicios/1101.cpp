#include <stdio.h>
int main(){
    int num1, num2, maior, menor, soma;
    while(num1>0 || num2>0){
        scanf("%d %d", &num1, &num2);
        if(num1>num2){
            maior=num1;
            menor =num2;
        }
        else{
            maior=num2;
            menor=num1;
        }
        while(menor<=maior){
            soma+=menor;
            printf("%d ",menor);
            menor++;
        }
        printf("Sum =%d\n",soma);
    }
    return 0;
}