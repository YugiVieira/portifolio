#include <stdio.h>
#include <stdlib.h>

#define ROWS 5
#define COLS 5

void inicializarMatriz(char matriz[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            matriz[i][j] = 'O';  // Inicializa todos os lugares como disponíveis (O)
        }
    }
}

void exibirMatriz(char matriz[][COLS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%c ", matriz[i][j]);  // Exibe o valor correspondente ao lugar
        }
        printf("\n");
    }
}

void reservarLugar(char matriz[][COLS], int row, int col) {
    if (matriz[row][col] == 'O') {
        matriz[row][col] = 'X';  // Marca o lugar como ocupado (X)
        printf("Lugar reservado com sucesso!\n");
    } else {
        printf("Lugar indisponível. Escolha outro lugar.\n");
    }
}

int main() {
    char lugares[ROWS][COLS];
    int fila, coluna;
    char opcao;

    inicializarMatriz(lugares);

    do {
        system("cls"); // Limpa a tela no Windows, use "clear" no Linux
        printf("Escolha uma opção:\n");
        printf("1 - Reservar um lugar\n");
        printf("2 - Conferir os lugares\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                printf("Digite a fila: ");
                scanf("%d", &fila);
                printf("Digite a coluna: ");
                scanf("%d", &coluna);
                reservarLugar(lugares, fila, coluna);
                break;
            case '2':
                exibirMatriz(lugares);
                break;
            case '0':
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
        printf("Pressione Enter para continuar...");
        getchar();
        getchar();
    } while (opcao != '0');

    return 0;
}


