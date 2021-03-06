
#include <stdio_ext.h>
#include <stdlib.h>


int utn_int	(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	int bufferInt;

	if(pResultado !=NULL && mensaje !=NULL && mensajeError!=NULL)
	{
		if(minimo<maximo && reintentos>=0)
		{
			retorno =-2;
			printf("%s",mensaje);
			do
			{
				__fpurge(stdin);
				if(scanf("%d",&bufferInt)==1 && bufferInt>=minimo && bufferInt<=maximo)
				{
					retorno = 0;
					*pResultado = bufferInt;
					break;
				}
				printf("%s",mensajeError);
				reintentos--;
			}while(reintentos>=0);
		}
	}
	return retorno;
}


int utn_float(float* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	float bufferFloat;

	if(pResultado !=NULL && mensaje !=NULL && mensajeError!=NULL)
	{
		if(minimo<maximo && reintentos>=0)
		{
			retorno =-2;
			printf("%s",mensaje);
			do
			{
				__fpurge(stdin);
				if(scanf("%f",&bufferFloat)==1 && bufferFloat>=minimo && bufferFloat<=maximo)
				{
					retorno = 0;
					*pResultado = bufferFloat;
					break;
				}
				printf("%s",mensajeError);
				reintentos--;
			}while(reintentos>=0);
		}
	}
	return retorno;
}



int utn_char(char* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int retorno = -1;
	char bufferChar;

	if(pResultado !=NULL && mensaje !=NULL && mensajeError!=NULL)
	{
		if(minimo<maximo && reintentos>=0)
		{
			retorno =-2;
			printf("%s",mensaje);
			do
			{
				__fpurge(stdin);
				if(scanf("%c",bufferChar)==1 && bufferChar>=minimo && bufferChar<=maximo)
				{
					retorno = 0;
					*pResultado = bufferChar;
					break;
				}
				printf("%s",mensajeError);
				reintentos--;
			}while(reintentos>=0);
		}
	}
	return retorno;
}



int ordenamientoArrayDes(int pArray[],int size)
{
	int contador=0;
	int i=0;
	int buffer;
	int retorno;
	int nuevoSize;
	int flagSwap;

	if(pArray!=NULL && size>=0)
	{
		nuevoSize = size-1;
		while(flagSwap)
		{
			flagSwap=0;
			for(i=0;i<nuevoSize;i++)
			{
				if(pArray[i]<pArray[i+1])
				{
					flagSwap=1;
					buffer=pArray[i];
					pArray[i]=pArray[i+1];
					pArray[i+1] = buffer;
				}
				contador++;
			}
			nuevoSize--;
		}
	}
	retorno=contador;
	return retorno;
}

int imprimirArrayInt(int pArray[],int size)
{
	int retorno=-1;
	int i;

	if(pArray!=NULL && size>=0)
	{
		for(i=0;i<size;i++)
		{
			printf("%d ",pArray[i]);
		}
		retorno = 0;
	}
	return retorno;
}
