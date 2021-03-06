
#include <stdio_ext.h>
#include <stdlib.h>

int getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);

int main(void)
{
	int numeroIngresado;

	getNumero(&numeroIngresado, "Ingrese un numero", "Error, caracter invalido",0,100,3);
	if(getNumero(&numeroIngresado, "Ingrese un numero", "Error, caracter invalido",0,100,3)==0)
	{
		printf("El numero ingresado es %d",numeroIngresado);
	}
	else
	{
		printf("INGRESO DEMASIADAS VECES RESPUESTAS INVALIDAS");
	}
	return EXIT_SUCCESS;
}

int getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;

	do
	{
		if(scanf("%d",pResultado)==1 && minimo<maximo && reintentos>=0)
		{
			printf("%s",mensaje);
			scanf("%d",pResultado);
			if(pResultado>=&minimo && pResultado<=&maximo)
			{
				retorno = 0;
				break;
			}
		}
		else
		{
			printf("%s",mensajeError);
			printf("reintentos: %d",reintentos);
		}
	}while(reintentos>=0);

	return retorno;

}
