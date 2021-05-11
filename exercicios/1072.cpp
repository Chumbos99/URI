#include <iostream>
#include <math.h>
int main(){
    int qnt, num,in=0,out=0;
    scanf("%d",&qnt);
    for(int x=0;x<qnt;x++){
        scanf("%d",&num);
        if(num>=10&&num<=20){
            in++;
        }
        else{ 
            out++;
        }
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    
    return 0;
}