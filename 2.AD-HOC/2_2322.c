#include <stdio.h>

int main(){
    int sum = 0, n, a;
    scanf("%d", &n);
    for(int i = 0; i < n-1; i++){
        scanf("%d", &a);
        sum += a;
    }
    int faltante = (n * (n+1))/2 - sum;
    printf("%d\n", faltante);
}