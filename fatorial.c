#include <stdio.h>
#include "function_fatorial.c"

int main() 
{
    int numero;
    int resultado = 1;

    printf("\nDigite um número: ");
    scanf("%d", &numero);

    for(int contador = numero; contador >= 1; contador--)
    {
        resultado = fatorial * contador = numero;
    }

    printf("O fatorial de %d é %d\n", numero, resultado);
    printf("Feito por lara fazani")
    return 0;
}
