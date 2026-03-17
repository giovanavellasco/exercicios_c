#include <stdio.h>
#include <string.h> 

int main(){

    char nomes[10][20];

    for (int i = 0; i < 10; i++){
        printf ("Digite seu nome:\n");
        scanf("%s", nomes[i]); 
    }

    for (int i = 0; i < 10; i++){
        if (strlen(nomes[i]) > 4){
            printf("%d nome = %s\n", i + 1,nomes[i]);
        }
    }

    return 0;
}