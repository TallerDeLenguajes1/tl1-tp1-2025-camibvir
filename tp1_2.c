#include <stdio.h>
#include <math.h>
void cuadradoNumeroVacio (int numero);
void mostrarVariable (int variable);
void Invertir(int a, int b);

int main (){
    int numero=3, variable=2, primero, segundo;
    cuadradoNumeroVacio(numero);
    mostrarVariable(variable);
    printf("Ingrese dos numeros, a y b\n");
    scanf("%d", primero);
    scanf("%d", segundo);
    Invertir(primero, segundo);
}

void cuadradoNumeroVacio (int numero) {
    int cuadrado = numero*numero;
    printf("b. El cuadrado del numero 3 = %d\n", cuadrado);
}

void mostrarVariable(int variable){
    printf("c. El valor de la variable es: %d y su direccion de memoria es: %d\n", variable, &variable);
}

void Invertir(int a, int b){
    int auxiliar = a;
    a = b;
    b = auxiliar;
    printf("d. Los números invertidos son:\n");
    printf("a = %d y b = %d", a, b);
}