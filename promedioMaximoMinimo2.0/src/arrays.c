#include <stdio.h>
#include <stdlib.h>

int utn_maximoArrayInt(int* edadesArray,int size,int* resultado)
{
	int maximo;
	int retorno = -1;

	if(edadesArray!=NULL && resultado!=NULL && size>0)
	{
		maximo = edadesArray[0];
		for(int i=0;i<size-1;i++)
		{
			if(edadesArray[i]>1 && edadesArray[i]<150)
			{
				if(maximo<edadesArray[i])
				{
					maximo=edadesArray[i];
				}
			}
		}
		retorno = 0;
		*resultado = maximo;
	}
	return retorno;
}


int utn_minimoArrayInt(int* edadesArray,int size,int* resultado)
{
	int minimo;
	int retorno = -1;

	if(edadesArray!=NULL && resultado!=NULL && size>0)
	{
		minimo = edadesArray[0];
		for(int i=0;i<size-1;i++)
		{
			if(edadesArray[i]>1 && edadesArray[i]<150)
			{
				if(minimo>edadesArray[i])
				{
					minimo=edadesArray[i];
				}
			}
		}
		retorno = 0;
		*resultado = minimo;
	}
	return retorno;
}


int utn_promedioArrayInt(int* edadesArray,int size,float* resultado)
{
	int acumulador=0;
	int retorno = -1;

	if(edadesArray!=NULL && resultado!=NULL && size>0)
	{
		for(int i=0;i<size-1;i++)
		{
			if(edadesArray[i]>1 && edadesArray[i]<150)
			{
				acumulador+= edadesArray[i];
			}
		}
		retorno = 0;
		*resultado= (float)acumulador/size;
	}

	return retorno;
}
