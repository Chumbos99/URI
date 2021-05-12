#include <stdio.h>
#include <math.h>
int main(){
    int cont=0;
    double a, b, c, pitagoras, maior, menor, meio;
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a >= b && a >= c){

		maior = a;
		meio = b;
		menor = c;

	}

	if (b >= a && b >= c){

		maior = b;
		meio = a;
		menor = c;

	}

	else{

		maior = c;
		meio = a;
		menor = b;

	}
    pitagoras = pow(meio,2)+pow(menor,2);
    while(cont!=1){
        if(maior>=meio+menor){ 
            printf("NAO FORMA TRIANGULO\n");
            break;
        }
        if(pow(maior,2)== pitagoras){
            printf("TRIANGULO RETANGULO\n");
        }
        if(pow(maior,2)>pitagoras){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(pow(maior,2)<pitagoras){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(maior==meio&&maior==menor){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(maior==menor&&maior!=meio){
            printf("TRIANGULO ISOSCELES\n");
        }
        if(maior==meio&&maior!=menor){
            printf("TRIANGULO ISOSCELES\n");
        }
        if(meio==menor&&meio!=maior){
            printf("TRIANGULO ISOSCELES\n");
        }
        
        cont++;
    }
    
    return 0;
}