#include <stdio.h>

void inverterString(char *p1) {
    char *p2 = p1;

    while(*p2 != '\0'){
        ++p2;
    }
    --p2;

    while(p2 >= p1) {
        printf("%c", *p2);
        --p2;
    }
}

int main(){
    char palavra[] = "banana";
    inverterString(palavra);
    return 0;
}
