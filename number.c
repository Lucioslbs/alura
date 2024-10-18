#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x = rand() % 5;
    printf("Digite um número %d\n", x);
    srand(time(NULL));
    int n = rand() % 1 < 5; // Gera números entre 0 e 10
    printf("Eu gerei o número (%d)\n", n);
}
