#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    char temp;
    while (inicio < fim) {
        temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char str[100]; 
    printf("Digite uma string (max 99 caracteres): ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    inverterString(str);
    printf("String invertida: %s\n", str);
    return 0;
}
