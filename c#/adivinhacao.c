#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    // Imprime o cabeçalho do nosso jogo
    printf("************************************\n");
    printf("* Bem-vindo ao jogo de adivinhação *\n");
    printf("************************************\n");
    printf("\n\n");
    printf("        _----------_,         \n");
    printf("    ,\"__         _.;,\\      \n");
    printf("   //    ''--_--''...:\\      \n");
    printf("  //         |.........\\     \n");
    printf(" //          |..........\\    \n");
    printf("//,         _'_.........//:   \n");
    printf("|| -,    _-\"   \"-_... ,;;:;;  \n");
    printf("\\   -_-\"         \"-_//;;;;;  \n");
    printf(" \\  \\             //;;;;'   \n");
    printf("  \\  \\           //;;;;     \n");
    printf("   '.  \\         //;;;'      \n");
    printf("     \"-_\\_______//;;'       \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;

    int chute;
    int acertou = 0;
    int tentativas = 1;
    double pontos = 1000.0;

    int nivel;
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerotentativas;

    switch (nivel) {
        case 1:
            numerotentativas = 20;
            break;
        case 2:
            numerotentativas = 15;
            break;
        default:
            numerotentativas = 6;
            break;
    }

    // Laço principal do jogo
    for (int i = 1; i <= numerotentativas; i++) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) {
            break;
        } else if (maior) {
            printf("Seu chute foi maior que o número secreto\n");
        } else {
            printf("Seu chute foi menor que o número secreto\n");
        }

        tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos -= pontosperdidos;
    }

    printf("Fim de jogo!\n");

    if (acertou) {
        printf("\n\n");
        printf("                                                                    \n");
        printf("                     ,---.            ,---.                         \n");
        printf("                    // // \\.--'''--.////,\\                        \n");
        printf("                    \\ \\  _       _   // //                        \n");
        printf("                     \\//  //__  __\\  \\//                         \n");
        printf("                      |   //_O)_(_O \\  |                           \n");
        printf("                      |  .-'  ___  `-.  |                           \n");
        printf("                   .--|      \\_//      |--.                        \n");
        printf("                 ,'    \\ \\   |   // //    `.                      \n");
        printf("               //       `.  `--^--'  ,'       \\                    \n");
        printf("             .-''''''-.    `--.___.--'    .-'''''-,                 \n");
        printf(".-----------//        \\-----------------//       \\--------------. \n");
        printf("| .---------\\        //-----------------\\       //------------. | \n");
        printf("| |          `-`--`--'                    `-'--'-'              | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |                       'Você ganhou!'                        | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |                                                             | | \n");
        printf("| |_____________________________________________________________| | \n");
        printf("|_________________________________________________________________| \n");
        printf("                   )__________|__|__________(                       \n");
        printf("                  |            ||            |                      \n");
        printf("                  |____________||____________|                      \n");
        printf("                    ),-----.(      ),-----.(                        \n");
        printf("                  ,'   ==.   \\    /  .==    `.                     \n");
        printf("                 //            )  (           \\                    \n");
        printf("                 `==========='    `==========='                     \n");
        printf("\n\n");
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("Você perdeu! Tente de novo!\n");
        printf("\n\n");
        printf("                      .ee.                          \n");
        printf("             ,       /$$$$$$e.                      \n");
        printf("           //$'.    /$$.$'$$$$$.                    \n");
        printf("         //$$$$$\\   |$/$$$$$$$$$\\                 \n");
        printf("        // \"--.$|_ |/$'$$$$$$\"*'$                  \n");
        printf("     .ee.$$$.-   _____$$$$$$$$$$$$$                 \n");
        printf("    ////ee//A \\|'-|\"\"  \"**'                       \n");
        printf("    [$$$$$/|/ '-e$*     _\\ \"-.                    \n");
        printf("    /$$$$$|'    e,,   .'\\'\\ \\  '.                \n");
        printf("    [$$$$$[\\ (_$// // //.,'\\\\ \\, \\             \n");
        printf("     \\$A//\\|'_______  '\\   \\ |/ \\              \n");
        printf("        //-\"\"          \\.,| //      \\             \n");
        printf("      .-''''',          [ ] |         \\            \n");
        printf("   .,'                  [_] /         \\            \n");
        printf(" .'     _.sjw.          [// ]        . ]            \n");
        printf("/   .e$$$$$$$$)         | /         ] \\            \n");
        printf("| .e$$$$$$$$$$/     .-._/ |         ]  \\           \n");
        printf("\\ \\$$***$$/  )      \\  /  |         |  |         \n");
        printf(" \\ '*(  \\/ .'__      // ,'|          /   |        \n");
        printf(" /',._|    \"\"  \\   ., ., //          /  |          \n");
        printf("//  -'//__.   --.//----   |       /    |          \n");
        printf("|      //./\\  )--\"\"      |.  ,   /     /  \\       \n");
        printf("\\     \"'// '- ,        //\\ //[]\\//    //       \n");
        printf(" ',___.'' |     |         |\\|  /-,    //    ]      \n");
        printf("          /     |         \\      ]    [    //      \n");
        printf("          |     |,        \\ . --'|    //   //      \n");
        printf("          /     \\         '.'-.'     //  / /       \n");
        printf("          []     \\          \"\"      // .' /-       \n");
        printf("          |\\ .    \\        .       /.\"  \".'       \n");
        printf("          [//\\ \\ .   \\  .    //    .  / _.-'     \n");
        printf("          ' \\ \\ [\\,    ],  //|/| /|,/__,7        \n");
        printf("             \\[\\[\\\\   [\\]// | /// '            \n");
        printf("            .,',' \\ '-.\\ V  /                     \n");
        printf("            |-. '-.\\  |''   /_.--.                 \n");
        printf("            | /'.     |       .--|                  \n");
        printf("             V       _A     ''-. /                  \n");
        printf("              '----\"  \".     | .'                   \n");
        printf("                         ',.\" \"                     \n");
        printf("\n\n");
    }

    return 0;
}
