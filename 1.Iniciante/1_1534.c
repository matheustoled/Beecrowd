#include <stdio.h>

int main(){
int n;

while(scanf("%d", &n) != EOF){

        int matriz[n][n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(j==(n-1-i)){
                    matriz[i][j] = 2;
                }
                else if(i==j){
                    matriz[i][j] = 1;
                }
                else{
                    matriz[i][j] = 3;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%d", matriz[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}