#include <stdio.h>
#include <stdlib.h>
int main() {
    char jogar_novamente;
    int escolha;
    int numero = (rand() % 5) + 1;
    printf(" _________________\n");
    printf("| 1             2 |\n");
    printf("|        5        |\n");
    printf("|                 |\n");
    printf("| 3             4 |\n");

    while (1) {
        printf("escolha um lugar para chutar (1, 2, 3 ,4, 5): ");
        scanf("%d", &escolha);
        if (escolha != 1) {
            printf("Invalido, digite apenas um numero entre 1 e 5\n");
            scanf("%*s");
            continue;
        }
        else if (escolha == numero) { 
            printf("Gol!\n");
        }
        else {
            printf("Errou!\n");
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogar_novamente);
        if (jogar_novamente == 'n' || jogar_novamente == 'N') {
            printf("Programa encerrado, obrigado por jogar!\n");
            return 0;
        } else {
   
            numero = (rand() % 5) + 1;
        }
    }
    return 0;
}