#include <stdio.h>

// Varivel global wao pegue no meu..
float Xtremo = 0;

//Procedimento: adiciona a contribuição
void adcCont(float valor){
    Xtremo += valor;
    printf("Contribuição de R$ %.2f incluida. Total R$%.2f\n", valor, Xtremo);
}

//Função: calcula quantidade de carne
float calCCarne(int QTDpess){
    return QTDpess * 0.5;
}


// Procedimento para mostrar o RESUMO
void mostraResumo(int QTDpess){

    
        float carne = calCCarne(QTDpess);
        float media = Xtremo / QTDpess;
        printf("\n==== RESUMÃO DO CHURRASCO DE GATO ===\n");
        printf("\nParticipantes: %d\n", QTDpess);
        printf("\nCarne necessaria : %.2f Kg\n", carne);
        printf("Total Arrecadado : R$ %.2f\n", Xtremo);
        printf("Média por pessoa : R$ %.2f\n", media);
        printf("======================================\n");
}
// Procedimento para mostrar o RESUMO
void mostraGreed(int QTDpess){

    
        float carne = calCCarne(QTDpess);
        float media = Xtremo / QTDpess;
        printf("\n==== RESUMÃO DO CHURRASCO DE GATO ===\n");
        printf("\nVagabundos: %d\n", QTDpess);
        printf("\nCarne minima : %.2f Kg\n", carne);
        printf("Esmola Arrecadada : R$ %.2f\n", Xtremo);
        printf("Média por miseravel : R$ %.2f\n", media);
        printf("======================================\n");
}



int main(){
     int pess;
     float val;

     printf("Quantos vagabundos irão comparecer? ");
     scanf("%d", &pess);

    for(int i = 1; i <= pess; i++){
        printf("Digite a contribuição do participante %d: R$ \n", i);
        scanf("%f", &val);
        adcCont(val);
    }


    if (Xtremo < 100){
    
        mostraResumo(pess);
    }
}