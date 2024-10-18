#include <stdio.h>

int main(void)
{
    int idade = 33;
    float altura = 1.76;
    float peso = 85.9;
    char sexo = 'M';
    char *nome = "juvenal";

    printf("%s é do sexo %c, tem %i anos e pesa %.1fkg, altura %.2f\n", nome, sexo, idade, peso, altura);

    return 0;
}
