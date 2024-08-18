#include <stdio.h>

int main(){
    int a, b, max, min, x;

    scanf("%d", &a);    
    scanf("%d", &b);

    x = 0;

    if(a>b){
        max = a;
        min = b;
    } 
    else{
        max = b;
        min = a;
    }

    for(int i = min+1; i<max; i+=1){
        if(i%2 != 0){
            x += i;
        }
    }

    printf("%d\n", x);
    return 0;
}