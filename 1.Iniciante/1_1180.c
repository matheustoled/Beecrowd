#include <stdio.h>

int main() {

    int n;
    int min;
    int posicao = 0;  // Inicializa a posiC'C#o com 0

    scanf("%d", &n);

    int vetor[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    min = vetor[0];
    for(int i = 0; i < n; i++) {
        if(vetor[i] < min) {
            min = vetor[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", min);
    printf("Posicao: %d\n", posicao);
    return 0;
}