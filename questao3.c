#include <stdio.h>

#define NUM_DIAS 30 // Define o número de dias no mês
int main() {
    float faturamento[NUM_DIAS] = {0};
    float soma = 0;
    float menor, maior;
    int dias_acima_media = 0;
    // Leitura dos valores de faturamento
    printf("Digite o faturamento diário para cada dia do mês:\n");
    for (int i = 0; i < NUM_DIAS; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &faturamento[i]);
        soma += faturamento[i];
    }
    // Calcular menor e maior valor de faturamento
    menor = maior = faturamento[0];
    for (int i = 1; i < NUM_DIAS; i++) {
        if (faturamento[i] < menor) menor = faturamento[i];
        if (faturamento[i] > maior) maior = faturamento[i];
    }
    // Calcular média mensal
    float media = soma / NUM_DIAS;
    // Contar dias com faturamento acima da média
    for (int i = 0; i < NUM_DIAS; i++) {
        if (faturamento[i] > media) dias_acima_media++;
    }
    // Exibir os resultados
    printf("Menor valor de faturamento: %.2f\n", menor);
    printf("Maior valor de faturamento: %.2f\n", maior);
    printf("Número de dias com faturamento acima da média: %d\n", dias_acima_media);

    return 0;
}
