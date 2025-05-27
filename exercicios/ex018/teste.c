#include <stdio.h>

int main(){
    int *ptr;

    ptr = malloc(sizeof(int));
    ptr[0] = 12;
    printf("Conteudo de 0: %d\n", *ptr);
    printf("Endereco do inicio do vetor: %p\n", ptr);
    printf("Endereco do ponteiro %p\n", &ptr);
    return 0;
}