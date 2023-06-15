#include <stdio.h>
#include <string.h>

int main() {
    char sexo, olhos[20], cabelos[20];
    int idade, maiorIdade = 0, totalHabitantes = 0, totalMVL = 0; //MVL = Mulher+OlhoVerde+Loira
    float percentMVL; 
    char continuar;

    do {
        printf("Informe o sexo [M/F]: ");
        scanf(" %c", &sexo);

        printf("Informe a cor dos olhos (Azuis, verdes, castanhos ou pretos): ");
        scanf("%s", olhos);

        printf("Informe a cor dos cabelos (Loiros, castanhos ou pretos): ");
        scanf("%s", cabelos);

        printf("Informe a idade: ");
        scanf("%d", &idade);

        if (idade > maiorIdade) {
            maiorIdade = idade;
        }

        if (sexo == 'F'||sexo == 'f' && idade >= 18 && idade <= 35 && strcmp(olhos, "verdes") == 0 && strcmp(cabelos, "loiros") == 0) {
            totalMVL++;
        }

        totalHabitantes++;

        printf("Deseja continuar? (S ou N): ");
        scanf(" %c", &continuar);

        printf("\n");
    } while (continuar == 'S' || continuar == 's');

    percentMVL = (totalMVL / totalHabitantes) * 100;

    printf("Maior idade dos habitantes: %d\n", maiorIdade);
    printf("Porcentagem de mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros: %.2f%%\n", percentMVL);

    return 0;
}
