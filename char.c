#include <stdio.h>

int main(void)
{
    char r;
    char s;
    printf("Digite só uma letra: ");
    scanf(" %c", &r);
    //fflush(stdin);
    //r = getchar( );
    printf("Digite outra letra: ");
    scanf(" %c", &s);
    //fflush(stdin);
    //s = getchar( );
    printf("Você digitou as letras \"%c\" e \"%c\"\n", r, s);

}
