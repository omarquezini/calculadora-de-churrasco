#include <stdio.h>

// Varivel global wao pegue no meu..
float Xtremo = 0;

//Procedimento: adiciona a contribuição
void adcCont(float valor){
    Xtremo += valor;
    printf("Contribuição de R$ %.2f incluida. Total R$%.2f", valor, Xtremo);
}

//Função: calcula quantidade de carne
float calCCarne(int QTDpess){
    return QTDpess * 0.5;
}


// Procedimento para mostrar o RESUMO
void mostraResumo(int QTDpess){

        float carne = calCCarne(QTDpess);
        float media = Xtremo / QTDpess;
        printf("==== RESUMÃO DO CHURRASCO DE GATO ===\n");
        printf("\nParticipantes: %d\n", QTDpess);
        printf("Carne necessaria : %.2f Kg", carne);
        printf("Total Arrecadado : R$ %.2f\n", Xtremo);
        printf("Média por pessoa : R$ %.2f\n", media);
}











int main(){
     int pess;

     float val;

     printf("Quantos vagabundos irão comparecer.");
     scanf("%d\n", &pess);

     mostraResumo(pess);
}