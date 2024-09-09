#include <stdio.h>

int pertence(int num) {
    if (num < 0) return 0; // Números negativos não pertencem à sequência de Fibonacci
    int a = 0, b = 1; // Inicia com os dois primeiros números da sequência
    if (num == a || num == b) return 1; // Verifica se o número é 0 ou 1
    int c;
    while (b <= num) {
        c = a + b; // Calcula o próximo número da sequência
        a = b; // Atualiza a para o próximo número
        b = c; // Atualiza b para o próximo número
        if (b == num) return 1; // Verifica se o número foi encontrado
    }
    return 0; // O número não pertence à sequência
}
int main() {
    int numero;
    // Solicita ao usuário que informe um número
    printf("Digite um número: ");
    scanf("%d", &numero);
    // Verifica se o número pertence à sequência de Fibonacci
    if (pertence(numero)) {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", numero);
    }
    return 0;
}
