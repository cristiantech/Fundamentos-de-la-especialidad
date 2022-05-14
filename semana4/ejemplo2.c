#include <stdio.h>

int main (){
    //declarar y asignar una variable
    int a = 45;
    // declaro un puntero
    int *pointer;

    // mostar la direccion en memoria de las variables

    printf("\nDireccion del pointer es: %p\n", pointer);
    printf("\nDireccion de a es: %p\n", &a);

    // mostar los valores de las variables 
    pointer = &a;

    printf("\nDireccion de a es: %d\n", a);
    printf("\nDireccion del pointer es: %d\n", *pointer);
    

    return 0;

}