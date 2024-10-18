#include <stdio.h>

int main(void)
{
    int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%i", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você acabou de digitar os valores %i e %.1f, Obrigado!\n", n, m);

}
