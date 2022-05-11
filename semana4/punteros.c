#include <stdio.h>


void duplicar( int * a){

    *a *= 2; 
}

int main (){

    int a = 5;
    printf("\nel valor de a es: %d\n", a);
    duplicar(&a);
    printf("el valor de a es: %d\n", a);

}