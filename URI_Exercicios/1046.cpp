#include <iostream>
#include <math.h>
int main(){
    int start, finish, tempo;
    scanf("%d %d",&start,&finish);
    if(start>finish||start==finish){
        finish=finish+24;
    }
    tempo= finish-start;
    printf("O JOGO DUROU %d HORA(S)\n",tempo );
 
    return 0;
}