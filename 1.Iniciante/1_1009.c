#include <stdio.h>

int main(){
    
    char nome[50];
    double s, v, total;

    scanf("%49s", nome); //49 é usado para n causar overflow  
    scanf("%lf", &s);
    scanf("%lf", &v);

    total = s+(0.15*v);

    printf("TOTAL = R$ %.2lf\n", total);
}