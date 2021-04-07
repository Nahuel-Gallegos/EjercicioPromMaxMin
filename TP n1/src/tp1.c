#include <stdio_ext.h>
#include <stdlib.h>


int tp1_pedirNumero(int* numeroInt, char* textoIngresado)
{
	int retorno = -1;

	if(textoIngresado != NULL)
	{
		printf("%s",textoIngresado);
		scanf("%d",numeroInt);
		retorno = 0;
	}
	return retorno;
}

int tp1_suma(int primerInt,int segundoInt,float* resultado)
{
	int retorno =-1;
	int suma;

	if(resultado!=NULL)
	{
		suma = primerInt + segundoInt;
		*resultado = suma;
		retorno = 0;
	}
	return retorno;
}


int tp1_resta(int primerInt,int segundoInt,float* resultado)
{
	int retorno =-1;
	int suma;

	if(resultado!=NULL)
	{
		suma = primerInt - segundoInt;
		*resultado = suma;
		retorno = 0;
	}
	return retorno;
}

int tp1_multiplicacion(int primerInt,int segundoInt,float* resultado)
{
	int retorno =-1;
	int multiplicacion;

	if(resultado!=NULL)
	{
		multiplicacion = primerInt * segundoInt;
		*resultado = multiplicacion;
		retorno = 0;
	}
	return retorno;
}

int tp1_division(int primerInt,int segundoInt,float* resultado)
{
	int retorno =-1;
	float division;

	if(resultado!=NULL && segundoInt != 0)
	{
		division = (float)primerInt/segundoInt;
		*resultado = division;
		retorno = 0;
	}
	return retorno;
}

int tp1_factorial(int primerInt,float* resultado)
{
	int retorno =-1;
	int factorial=1;

	if(resultado!=NULL && primerInt>0)
	{
		while(primerInt>1)
		{
			factorial = factorial*primerInt;
			primerInt--;
		}
		*resultado=factorial;
		retorno = 0;
	}
	return retorno;
}






















