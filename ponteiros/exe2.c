#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;

    int *pA = &a;
    int *pB = &b;

    int temp = *pA;
    *pA = *pB;
    *pB = temp;

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
