#include <stdio.h>

int main() {
    int altura;
    char opcao='E';

    do{
        printf("Digite a altura: "); 
        scanf(" %d", &altura);
        if(altura < 1||opcao=='F') break;
        printf("Desenhar à esquerda (A) ou à direita (D)? (F para sair): ");
        
        scanf(" %c", &opcao);

        if(opcao == 'F') break;

        if (opcao == 'A') {
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else if (opcao == 'D') {
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= altura - i; j++) {
                    printf(" ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else {
            printf("Opção inválida. Escolha A ou D.\n");
        }
    }while(opcao != 'F');

    return 0;
}
