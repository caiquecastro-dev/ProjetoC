#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a;
    int b;

    b = 10;
    a = (int*) malloc(sizeof(int));
    if (a == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    *a = 20;

    printf("*a = %d\n", *a);
    printf("b = %d\n", b);

    free(a);
    a = &b;
    
    return 0;
}