#include <stdio.h>
#include <math.h> //Importación de libreria math
//Declaracion de funciones
double perimetro(double radio , double pi){
	double res;
	res = 2 * pi * radio;
	return res;
	
}
double area(double radio , double pi){
	double res;
	res = pow((pi * radio), 2);
	return res;
	
}
double volumen(double radio , double pi){
	double res;
	res = pow(4.0 * pi * radio , 3) / 3;
	return res;
	
}
int main (){
// Declaracion de variables
double pi = 3.1416;
double radio;
double res = pow(pi, radio);
printf("Ingrese el radio: %lf", res);
scanf("%lf", &radio);
//Impresión de resultados
printf("\n el perimetro de la circuferencia es: %lf", perimetro(radio, pi));
printf("\n el area del circulo es: %lf", area(radio, pi));
printf("\n el volumen de la esfera es: %lf", volumen(radio, pi));	
}
