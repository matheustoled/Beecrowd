#include <stdio.h>

int main(){
    double a, soma;
    char c;
    double matriz[12][12];
    scanf("%c", &c);

    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            scanf("%lf", &a);
            matriz[i][j] = a;
        }
    }

    for(int i = 0; i<12; i++){
        for(int j = 0; j<12; j++){
            if(i < j && j < (12-1-i)){
                soma += matriz[i][j];
            }
        }
    }

    if(c == 'M'){
        float media = soma/30;
        printf("%.1lf\n", media);
    }
    else{
        printf("%.1lf\n", soma);
    }
}
