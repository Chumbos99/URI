#include <iostream>
#include <math.h>
int main(){
    int qnt;
    scanf("%d",&qnt);
    for(int x=1;x<=qnt;x++){
        if(x%2==0){
            printf("%d^2 = %d\n",x,x*x);
        }
        
    }
    
    
    return 0;
}