#include <stdio.h>
int main (){
// Declaracion de variables
int option;
//Declaramos un ciclo do while
do
{
	//Solicitamos informacion
	printf("\n 1. Encuadrar nombre en pantalla ");
	printf("\n 2. Imprimir solo nombre ");
	printf("\n 3. Salir ");
	printf("\n Ingrese una de las dos opciones ");
	scanf("%d", &option);
	
	//Presentaos la informacion dependiendo el caso
	switch (option)
	{
	case 1: 
		printf("******************\n");
		printf("*\t\t *\n");
		printf("* Cristian Muñoz *\n");
		printf("*\t\t *\n");
		printf("******************\n");
		return 0;
	case 2:
		printf("Cristian Muñoz \n");
		return 0;	
	}
} while ( option != 3);
return 0;
}
