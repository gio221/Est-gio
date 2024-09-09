#include <stdio.h>

int main() {
    int num_dias; // Variável para armazenar o número de dias no mês

    // Solicita ao usuário o número de dias
    printf("Digite o número de dias no mês: ");
    scanf("%d", &num_dias);

    // Verifica se o número de dias é válido
    if (num_dias <= 0) {
        printf("Número de dias inválido.\n");
        return 1;
    }

    float faturamento[num_dias]; // Array para armazenar o faturamento diário
    float soma = 0;
    float menor, maior;
    int dias_acima_media = 0;

    // Leitura dos valores de faturamento
    printf("Digite o faturamento diário para cada dia do mês:\n");
    for (int i = 0; i < num_dias; i++) {
        printf("Dia %d: ", i + 1);
        scanf("%f", &faturamento[i]);
        soma += faturamento[i];
    }

    // Inicializa menor e maior com o primeiro valor do array
    menor = maior = faturamento[0];

    // Calcular menor e maior valor de faturamento
    for (int i = 1; i < num_dias; i++) {
        if (faturamento[i] < menor) menor = faturamento[i];
        if (faturamento[i] > maior) maior = faturamento[i];
    }

    // Calcular média mensal
    float media = soma / num_dias;

    // Contar dias com faturamento acima da média
    for (int i = 0; i < num_dias; i++) {
        if (faturamento[i] > media) dias_acima_media++;
    }

    // Exibir os resultados
    printf("Menor valor de faturamento: %.2f\n", menor);
    printf("Maior valor de faturamento: %.2f\n", maior);
    printf("Número de dias com faturamento acima da média: %d\n", dias_acima_media);

    return 0;
}
