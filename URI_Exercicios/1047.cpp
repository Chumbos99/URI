#include <iostream>
#include <math.h>
int main(){
    int start_h, finish_h, tempo_h,finish_m,start_m, tempo_m;
    scanf("%d %d %d %d",&start_h,&start_m,&finish_h,&finish_m);
    tempo_h= finish_h-start_h;
    if(tempo_h<0){
        tempo_h=24+(finish_h-start_h);
    }
    tempo_m= finish_m-start_m;
    if(tempo_m<0){

        tempo_m=60+(finish_m-start_m);
        tempo_h--;
    }
   
    if(start_h==finish_h&&start_m==finish_m){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if(tempo_h<0){
        tempo_h= tempo_h+24;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempo_h, tempo_m );
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",tempo_h, tempo_m );
    return 0;
}