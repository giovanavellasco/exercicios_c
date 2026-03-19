#include <stdio.h>

int maiorValor(int vetor[], int const n){
    int *ponteiro; 
    int maior = vetor[0];
    int *const fim = vetor + n; 

    for (ponteiro = vetor; ponteiro < fim; ponteiro++){
        if (*ponteiro > maior){
            maior = *ponteiro;
        }
    }
    return maior;
}




a



cat > exe4.c << 'EOF'
#include <stdio.h>

int maiorValor(int vetor[], int const n){
    int *ponteiro; 
    int maior = vetor[0];
    int *const fim = vetor + n; 

    for (ponteiro = vetor; ponteiro < fim; ponteiro++){
        if (*ponteiro > maior){
            maior = *ponteiro;
        }
    }
    return maior;
}

int main(){
    int numeros[5] = {3, 7, 1, 9, 4};

    printf("O maior vetor é %d\n", maiorValor(numeros, 5));

    return 0;
}
