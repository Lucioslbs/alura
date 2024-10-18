#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[30];
    char ender[40];

    // Lê a entrada usando fgets
    printf("Digite seu nome: ");
    if (fgets(nome, sizeof(nome), stdin) != NULL) {
        // Remove o caractere de nova linha (se presente)
        if (nome[strlen(nome) - 1] == '\n') {
            nome[strlen(nome) - 1] = '\0';
        }

        // Lê o endereço usando fgets
        printf("Digite seu endereço: ");
        if (fgets(ender, sizeof(ender), stdin) != NULL) {
            // Remove o caractere de nova linha (se presente)
            if (ender[strlen(ender) - 1] == '\n') {
                ender[strlen(ender) - 1] = '\0';
            }

            // Imprime o nome e o endereço
            printf("Você digitou \"%s\" que mora em \"%s\"\n", nome, ender);
        } else {
            // Trata o caso de erro na entrada do endereço
            printf("Erro ao ler o endereço.\n");
        }
    } else {
        // Trata o caso de erro na entrada do nome
        printf("Erro ao ler o nome.\n");
    }

    return 0;
}
