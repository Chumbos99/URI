#include <stdio.h>
int main(){
    int i, x;
    scanf("%d %d\n", &i,&x);
    
    if(x%i==0|| i%x==0){
        printf("Sao Multiplos\n") ;
    }
    else{
        printf("Nao sao Multiplos\n"); 
    }

    return 0;
}