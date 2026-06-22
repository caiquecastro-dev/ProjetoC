#include <stdio.h>
#include <stdlib.h>

void display(int var, int *ptr);
void update (int *p); 

int main()
{
    int var = 15;
    int *ptr;

    ptr = &var;

    display(var, ptr);

    update(&var);  // Modificando o valor de var através do ponteiro

    display(var, ptr);

    printf("\n\nEnd.");
    while(1)
    return 0;

} // Fim do exemplo principal.

void display(int var, int *ptr)
{
    printf("\n");
    printf("=======================================");
    printf("\n\n");
    printf("Conteúdo de var: %d\n", var);
    printf("Endereço de var: %p\n", &var);
    printf("Conteúdo apontado por ptr: %d\n", *ptr);
    printf("Endereço apontado por ptr: %p\n", ptr);
    printf("Endereço de ptr: %p\n", &ptr);

}

void update (int *p)
{
    *p = *p+1;

}