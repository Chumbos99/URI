#include <iostream>
#include <math.h>
int main(){
    
    signed short int a, b, resultado, resto;

  scanf("%hd %hd", &a, &b);

    resultado=(a-resto)/b;
    resto = a%b;
    
  printf("%d %d\n", resultado, resto);
    
    
}