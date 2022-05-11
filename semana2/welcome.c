#include <stdio.h>
/*
**
	1._ Pida por teclado el nombre (dato cadena) de una persona.
	2._ Muestre por pantalla el mensaje: "Hola <nombre>, buenos días.". 
*/

int main()
{
	char name[20];
	printf( "Ingrese su nombre: "); 
	scanf( "%s", name );
	printf( "Hola %s Buenos dias !! \n", name );
	return 0;
}
