#include <stdio.h>

void dobrar(int *n){
    *n *= 2;
}

int main(){
    int x = 5;
    int *n = &x;

    dobrar(n);

    printf("%d\n", x);

    return 0;
}
