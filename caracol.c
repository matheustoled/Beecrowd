#include <stdio.h>

#define MAX 100 // Definimos um tamanho máximo para a matriz

void preencherCaracol(int matriz[MAX][MAX], int n) {
    int valor = 1;
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        // Preencher a linha superior
        for (int i = inicio; i <= fim; i++) {
            matriz[inicio][i] = valor++;
        }
        // Preencher a coluna direita
        for (int i = inicio + 1; i <= fim; i++) {
            matriz[i][fim] = valor++;
        }
        // Preencher a linha inferior
        for (int i = fim - 1; i >= inicio; i--) {
            matriz[fim][i] = valor++;
        }
        // Preencher a coluna esquerda
        for (int i = fim - 1; i > inicio; i--) {
            matriz[i][inicio] = valor++;
        }
        inicio++;
        fim--;
    }
}

void imprimirMatriz(int matriz[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);

    if (n > MAX) {
        printf("Tamanho muito grande! O tamanho máximo é %d.\n", MAX);
        return 1;
    }

    int matriz[MAX][MAX];

    preencherCaracol(matriz, n);
    imprimirMatriz(matriz, n);

    return 0;
}