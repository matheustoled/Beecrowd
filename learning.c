#include <stdio.h>
#include <stdlib.h>

void soma(int x, int *ptr){
    int soma = x + *ptr;

    printf("%d\n", soma);
}

void subtracao(int x, int *ptr){
    int subtracao = x - *ptr;

    printf("%d\n", subtracao);
}

void troca_valores(int x, int *ptr){
    int aux = x;
    x = *ptr;
    *ptr = aux;

    printf("%d %d\n", x , *ptr);
}

void soma_elementos_vetor(int *vetor[], int tamanho){
    int soma = 0;

    for(int i = 0; i < tamanho; i++){
        soma += *vetor[i];
    }

    printf("Soma dos elementos: %d\n", soma);
}

int main(){
    int a = 50;
    int b = 10;
    int *ptr;
    ptr = &a;

    int x = 1, y = 2, z = 3;
    int *vetor[] = {&x, &y, &z};

    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("%p\n", ptr);
    printf("%d\n", *ptr);

    soma(b, ptr);

    subtracao(b, &a);

    troca_valores(b, ptr);

    soma_elementos_vetor(vetor, tamanho);

    return 0;
}