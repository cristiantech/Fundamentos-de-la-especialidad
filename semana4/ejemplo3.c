#include <stdio.h>
#include <stdlib.h>

//definicion de funciones

int multiplication(int a, int b){
    return a * b;
}

int division (int a, int b){
    return a / b;
}

int sum (int a, int b){
    return a + b;
}

int subtraction (int a, int b){
    return a - b;
}

void print(int *res){
    printf("\nEl resultado es: %d\n", *res);
}

// controlador

int operation (int *election, int *a, int *b){
    switch (*election){
        case 1:
            return(multiplication(*a,*b));
        break;

        case 2:
            return (division(*a,*b));
        break;

        case 3:
            return (sum(*a,*b));
        break;

        case 4:
            return (subtraction(*a,*b));
        break;
    }
}


// funcion main

int main()
{
    int num1, num2;
    int election, result;

    printf("\nIntroduzca un numero: \n\n");
    scanf("%d", &num1);
    
    printf("\nIntroduzca otro numero: \n\n");
    scanf("%d", &num2);

    printf("\nElija la operacion a realizar:\n\n  -1: Multiplicacion\n  -2: Division\n  -3: Suma\n  -4: Resta\n\n");
    scanf("%d", &election);

    result = operation(&election, &num1, &num2);
    print(&result);

    return 0;
}