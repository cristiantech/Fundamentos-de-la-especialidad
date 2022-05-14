#include <stdio.h>

//Programa que lee números hasta que se lee un negativo y muestra la  suma de los números leídos.


int dato;

int add(int one, int two){
	int res = 0;
	res = one + two;
	return res;
}
int sub(int one, int two){
	int res = 0;
	res = one - two;
	return res;
}
int mul(int one, int two){
	int res = 0;
	res = one * two;
	return res;
}
int div(int one, int two){
	int res = 0;
	res = one / two;
	return res;
}
int mod(int one, int two){
	int res = 0;
	res = one % two;
	return res;
}


int num1;
int num2;

int main(){
	
	printf("ingrese el primer numero: ");
	scanf("%d",&num1);	
	printf("ingrese el segundo numero: ");
	scanf("%d",&num2);

	//mostrando resultados
	printf("\nLa suma es: %d", add(num1, num2));	
	printf("\nLa resta es: %d", sub(num1, num2));	
	printf("\nLa multiplicacion es: %d", mul(num1, num2));	
	printf("\nLa division es: %d", div(num1, num2));	
	printf("\nel modulo es: %d\n", mod(num1, num2));	
	return 0;
}
