#include <stdio.h>
#include <math.h>
void cuadradoNumeroVacio (int numero);

int main (){
    int numero=3;
    cuadradoNumeroVacio(numero);
    
}

void cuadradoNumeroVacio (int numero) {
    int cuadrado = numero*numero;
    printf("b. El cuadrado del numero 3 = %d\n", cuadrado);
}