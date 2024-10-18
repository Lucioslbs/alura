#include <stdio.h>

int main(void)
{
    printf("Qual é o seu nome? ");
    char nome[20];

    // Lê a entrada usando scanf
    if (scanf("%19s", nome) == 1)
    {
        // Imprime o nome
        printf("Você digitou: %s\n", nome);
    } else {
        // Tratar o caso de erro na entrada
        printf("Erro ao ler a entrada.\n");
    }

    printf("Quantos anos você tem? ");
    int idade;
    scanf("%i", &idade);
    printf("Qual e o seu peso? (kg) ");
    float peso;
    scanf("%f", &peso);
    printf("\n      <<< PROCESSANDO >>>     \n");
    printf("Muito prazer, %s. Você tem %i anos e pesa %.2fkg, correto?\nFIM.\n", nome, idade, peso);

    return 0;
}
