#include <stdio.h>
#include <math.h>
void cuadradoNumeroVacio (int numero);
void mostrarVariable (int variable);

int main (){
    int numero=3, variable=2;
    cuadradoNumeroVacio(numero);
    mostrarVariable(variable);
    
}

void cuadradoNumeroVacio (int numero) {
    int cuadrado = numero*numero;
    printf("b. El cuadrado del numero 3 = %d\n", cuadrado);
}

void mostrarVariable(int variable){
    printf("c. El valor de la variable es: %d y su direccion de memoria es: %d\n", variable, &variable);
}