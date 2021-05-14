#include <stdio.h>
#include <math.h>
int main(){
    int num, qnt;
    scanf("%d",&qnt);
    while(qnt!=0){
    scanf("%d",&num);
    //Valores par(even)
    if(num%2==0 &&num>0)
        printf("EVEN POSITIVE\n");
    if(num%2==0 &&num<0)
        printf("EVEN NEGATIVE\n");
    //Valores impar(ODD)
    if(num%2!=0 &&num>0)
        printf("ODD POSITIVE\n");
    if(num%2!=0 &&num<0)
        printf("ODD NEGATIVE\n");
    //Valores NULLOS(NULL)
    if(num==0 )
        printf("NULL\n");
    qnt--;
    }
    return 0;
}