#include <stdio.h>
int main(){
    int num, cont=0;
    scanf("%d",&num);
    while(cont!=6){
        if(num%2!=0){
            printf("%d\n",num);
            cont++;
        }
        
        num++;
    }



    return 0;
}