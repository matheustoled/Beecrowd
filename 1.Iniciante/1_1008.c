#include <stdio.h>

int main(){
    
    int n, h;
    float d, salario;

    scanf("%d", &n);
    scanf("%d", &h);
    scanf("%f", &d);

    salario = h*d;

    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}