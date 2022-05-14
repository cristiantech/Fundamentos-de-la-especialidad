#include <stdio.h>

//Ingresar un número y muestre en pantalla el mismo número de asteriscos.

int num;
int main(){
	int i;
	printf("Ingrese un numero: ");
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		printf("*\n");
	}
	return 0;
}
