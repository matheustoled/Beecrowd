#include <stdio.h>
 
int main() {
    int par[5];
    int impar[5];
    int v = 0, count_impar = 0, count_par = 0;

    for(int i = 0; i<15; i++){
        scanf("%d", &v);
        if(v%2 != 0){
            impar[count_impar] = v;
            count_impar++;
            if(count_impar == 5){
                for(int j = 0; j < 5; j++){
                    printf("impar[%d] = %d\n", j, impar[j]);
                    impar[j] = 0;
                    count_impar = 0;
                }
            }
        }
        else{
            par[count_par] = v;
            count_par++;
            if(count_par == 5){
                for(int j = 0; j < 5; j++){
                    printf("par[%d] = %d\n", j, par[j]);
                    par[j] = 0;
                    count_par = 0;
                }
            }
        }
    }

    for(int j = 0; j < count_impar; j++){
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for(int j = 0; j < count_par; j++){
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}