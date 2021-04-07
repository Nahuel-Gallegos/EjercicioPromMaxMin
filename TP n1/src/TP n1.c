
#include <stdio_ext.h>
#include <stdlib.h>
#include "tp1.h"
#define cantidadArray 3


int main(void)
{

	int operandoIngresado[2];
	char operacion;
	float resultadoFloatOperacion[cantidadArray];
	int repeticion=0;
	int resultadoFuncion[cantidadArray];

	tp1_pedirNumero(&operandoIngresado[0],"Ingrese primer numero:\n");
	tp1_pedirNumero(&operandoIngresado[1],"Ingrese segundo numero:\n");

	do
	{
		printf("\n¿Que operacion desea realizar? (+,-,*,/,!)\n");
		__fpurge(stdin);
		scanf("%c",&operacion);
		if(operacion == '+' || operacion == '-' || operacion == '*' || operacion == '/' || operacion == '!')
		{
			switch(operacion)
			{
				case '+':
					resultadoFuncion[0] = tp1_suma(operandoIngresado[0],operandoIngresado[1],&resultadoFloatOperacion[0]);
					break;
				case '-':
					resultadoFuncion[0] = tp1_resta(operandoIngresado[0],operandoIngresado[1],&resultadoFloatOperacion[0]);
					break;
				case '*':
					resultadoFuncion[0] = tp1_multiplicacion(operandoIngresado[0],operandoIngresado[1],&resultadoFloatOperacion[0]);
					break;
				case '/':
					resultadoFuncion[0] = tp1_division(operandoIngresado[0],operandoIngresado[1],&resultadoFloatOperacion[0]);
					break;
				case '!':
					resultadoFuncion[1] = tp1_factorial(operandoIngresado[0],&resultadoFloatOperacion[1]);
					resultadoFuncion[2] = tp1_factorial(operandoIngresado[1],&resultadoFloatOperacion[2]);
					break;
			}
			break;
		}
		else
		{
			if(repeticion ==3)
			{
				printf("\nIngreso demasiadas veces operaciones invalidas.");
			}
			repeticion++;

		}
	}while(repeticion<=3);

	for(int i=1;i<cantidadArray;i++)
	{
		if(operacion == '!')
		{
			if(resultadoFuncion[i] == 0)
			{
				printf("El factorial de %d es: %.2f ",operandoIngresado[i],resultadoFloatOperacion[i]);
			}
			else
			{
				printf("No existe factorial de %d ya que es menor a 1",operandoIngresado[i]);
			}
		}
	}

	if(resultadoFuncion[0] == 0)
	{
			printf("\n“El resultado de %d %c %d es: %.2f",operandoIngresado[0],operacion,
														operandoIngresado[1],resultadoFloatOperacion[0]);
	}
	else
	{
		if(operacion=='/')
		{
			printf("\nNo es posible dividir por cero");
		}
	}

	return EXIT_SUCCESS;
}
































