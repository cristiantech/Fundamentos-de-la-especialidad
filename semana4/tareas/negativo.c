#include <stdio.h>

//Programa que lee números hasta que se lee un negativo y muestra la  suma de los números leídos.

int num= 0;
int dato;
int main(){
	
	do{
	   printf("Ingrese un numero: ");
	   scanf("%d", &dato);
	   if(dato >= 0){
	   num = num + dato; 
	   }
	}while(dato > 0);

	printf("el resultado es: %d\n", num);
	
	return 0;
}
