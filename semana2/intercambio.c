#include <stdio.h>

int main()
{
	//declaracion de variables
	int v1, v2;
	printf("Ingrese el primer numero: ");
	scanf("%d", &v1 );
	printf("Ingrese el segundo numero: ");
	scanf("%d", &v2 );
	
	printf("Variable orginal v1 %d\n", v1);
	printf("Variable orginal v2 %d\n", v2);
	//Cambio de variables
	int v3 = v2;
	v2 = v1;
	v1 = v3;
	printf("Variable Intercambiada v1 %d\n", v1);
	printf("Variable Intercambiada v1 %d\n", v2);
	return 0;

}

