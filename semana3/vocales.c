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
	char vocal;
	int res=0;
	char vocales[] = {'a','e','i','o','u','A','E','I','O','U'};
	int i;
	printf("Ingrese la vocal: ");
	scanf("%c", &vocal);
	
	for(i=0; i<10; i++){
		if(vocal == vocales[i]){
			res=1;
			break;
		}
	}
	if(res == 1){
		printf("el caracter ingresado %c ingresado es una vocal\n", vocal);
	}else{
		printf("el caracter ingresado %c ingresado no es una vocal\n", vocal);
	}		
			

	return 0;
}
