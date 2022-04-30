#include <stdio.h>
/*Escribir en lenguaje C un programa que:

	1. Pida por teclado un número (dato entero).
	2. Muestre por pantalla:
		"ES PAR", en el caso de que el número sea divisible entre.
		"ES IMPAR", en el caso de que el número no sea divisible entre.
*/
int main ()
{
	//declaracion de variable de entrada
	int valor;
	printf("Ingrese un numero: ");
	scanf("%d", &valor);
	//Validamos la informacion
	if(valor % 2 == 0){
		printf("el numero %d ingresado es par\n", valor);
	}else{
		printf("el numero %d ingresado es impar\n", valor);
	}
	return 0;

}
