#include <stdio.h>

int main(){
    int idade = 20;
    int *pIdade;
    pIdade = &idade;

    *pIdade = 25;

    printf("%d\n", *pIdade);

    return 0;
}
