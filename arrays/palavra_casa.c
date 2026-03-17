#include <stdio.h>
#include <string.h>

int main(){

    char palavra[20];
    sprintf(palavra, "CASA");

    char chutes[3];

    for (int i = 0; i < 3; i++) {
        printf("Digite uma letra: ");
        scanf(" %c", &chutes[i]);
    }

    for (int i = 0; i < strlen(palavra); i++) {

        int achou = 0;

        for (int j = 0; j < 3; j++) {
            if (chutes[j] == palavra[i]) {
                achou = 1;
                break;
            }
        }

        if (achou) {
            printf("%c ", palavra[i]);
        } else {
            printf("_ ");
        }
    }

    printf("\n");
    return 0;
}