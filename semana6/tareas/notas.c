#include <stdio.h>
#include <stdlib.h>

// En un fichero tenemos las notas de un grupo de 
// alumnos de una clase con valores Nota(1), Nota(2), ..., 
// Nota(n – 1), establecidas entre 0 y 10. El último dato 
// es un señalero con valor – 50. El número de notas que 
// çcontiene el fichero no se conoce, pero se sabe que el 
// mínimo número de alumnos en la clase es 1 y el máximo 100. 
// Se desea crear un programa que determine la nota media.
#define NMAXALUMNOS 100

int main() {

    double suma;
    double media;
    int contador = 0;
    int notas[NMAXALUMNOS] = {10,8,5,4,-50};
    for (int i = 0; i < NMAXALUMNOS; i++)
    {
        if(notas[i] == -50){
            break;
        }else{
            suma += notas[i];
            contador++;
        }
    }
    media = suma / contador;
    printf("La media de los valores es: %lf\n", media);
}