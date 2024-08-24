#include <stdio.h>

int main(){
    int a, b, soma;
    scanf("%d %d", &a, &b);
    int matriz[a][b];
    int somas[b];

    for(int i = 0; i<a; i++){
        for(int j = 0; j<b; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i = 0; i<b; i++){
        soma = 0;
        for(int j = 0; j<a; j++){
            soma += matriz[j][i];
        }
        somas[i] = soma;
    }

    for(int i = 0; i<b; i++){
        for(int j = 0; j<b-i-1; j++){
            if(somas[j+1]>somas[j]){
                int aux = somas[j];
                somas[j] = somas[j+1];
                somas[j+1] = aux;
            }
        }
    }

    printf("%d\n", somas[0]);
    return 0;
}