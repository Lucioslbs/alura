#include <stdio.h>
#include <string.h>

int main(void)
{
    char nome[30];
    char sexo[2];
    float nota;

    // Loop para cadastrar três pessoas
    for (int i = 1; i <= 3; i++)
    {
        printf("Cadastro da Pessoa %d:\n", i);

        // Nome
        printf("Digite o nome: ");
        fgets(nome, sizeof(nome), stdin);
        nome[strcspn(nome, "\n")] = '\0'; // Remover a quebra de linha

        // Sexo
        printf("Digite o sexo: ");
        fgets(sexo, sizeof(sexo), stdin);
        sexo[strcspn(sexo, "\n")] = '\0'; // Remover a quebra de linha

        // Nota
        printf("Digite a nota: ");
        scanf("%f", &nota);
        getchar(); // Consumir o caractere de nova linha pendente

        // Exibindo os dados cadastrados
        printf("\nDados da Pessoa %d:\n", i);
        printf("Nome: %s\n", nome);
        printf("Sexo: %s\n", sexo);
        printf("Nota: %.2f\n", nota);

        // Separador entre as pessoas
        printf("------------------------\n");
    }

    return 0;
}
