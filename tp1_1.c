#include <stdio.h>

int main (){

    printf ("Hola mundo\n");

    int variable, *puntero;
    variable = 10;
    puntero = &variable;
    printf("El valor del contenido del puntero es: %d\n", *puntero);
    printf("La dirección de memoria almacenada por el puntero es: %d\n", puntero);
    printf("La dirección de memoria de la variable es: %d\n ",&variable);
    printf("La dirección de memoria del puntero es: %d\n", &puntero);
    printf("El tamaño de memoria utilizado por la variable es: %d\n", sizeof(variable));

    

}