#include <iostream>
int main(){
    int dia_inicio,dia_final,h_inicio,h_final,m_inicio,m_final,s_inicio,s_final;
    int seg_total_inicio,seg_total_final, tempo_final;
    char string[10];
    scanf("%s %d",string,&dia_inicio);
    scanf("%d : %d : %d",&h_inicio,&m_inicio,&s_inicio);
    scanf("%s %d",string,&dia_final);
    scanf("%d : %d : %d",&h_final,&m_final,&s_final);
    seg_total_inicio = s_inicio + m_inicio*60 + h_inicio*60*60 + dia_inicio*60*60*24;
    seg_total_final = s_final + m_final*60 + h_final*60*60 + dia_final*60*60*24;
    tempo_final=seg_total_final-seg_total_inicio;
    printf("%u dia(s)\n", tempo_final/(60*60*24));
	tempo_final = tempo_final % (60*60*24);
	printf("%u hora(s)\n", tempo_final/(60*60));
	tempo_final = tempo_final % (60*60);
	printf("%u minuto(s)\n", tempo_final/(60));
	tempo_final = tempo_final % (60);
	printf("%u segundo(s)\n", tempo_final);
    return 0;
}