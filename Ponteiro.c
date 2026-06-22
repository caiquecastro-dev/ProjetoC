#include <stdio.h>

int main() {
    int x = 10;
    int* p = &x; // ponteiro para x

    printf("Valor de x: %d\n", x); // imprime o valor de x
    printf("Endereço de x: %p\n", &x); // imprime o endereço de x
    printf("Valor de p: %p\n", p); // imprime o valor de p (endereço de x)
    printf("Valor apontado por p: %d\n", *p);

    *p = 20; // altera o valor de x através do ponteiro
    printf("Novo valor de x: %d\n", x); // imprime o novo valor

    return 0;
}   