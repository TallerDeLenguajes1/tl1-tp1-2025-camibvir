#include <stdio.h>
#include <math.h>
int cuadradoNumero (int numero);


int main (){
    int numero=3;
    int cuadrado = cuadradoNumero(numero);
    printf("a. El cuadrado del numero 3 = %d\n", cuadrado);
}

int cuadradoNumero (int numero) {
    return(numero*numero);
}