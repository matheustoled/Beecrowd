#include<stdio.h>

int main(){
        int n, r;
        scanf("%d %d", &n, &r);
        if(n == r){
            printf("*");
        }
        else{
            int voltaram[r];
            int nao_voltaram[n-r];
            for(int i=0; i<r; i++){
            scanf("%d", &voltaram[i]);
            } 
            for(int i=0; i<r-1; i++){
                for(int j=0; j<r-1; j++){
                    if(voltaram[i+1] < voltaram[i]){
                        int aux = voltaram[r];
                        voltaram[r] = voltaram[r+1];
                        voltaram[r+1] = aux;
                    }
                }
            }
            int c = 0;
            for(int i=0; i<r-1; i++){
                if(voltaram[i+1]-voltaram[i] != 1){
                    nao_voltaram[c] = voltaram[i] + 1;
                    c+=1;
                }
                else{
                    continue;
                }
            }
            for(int i = 0; i<c; i++){
                printf("%d\n", nao_voltaram[i]);
               }
        return 0;
}