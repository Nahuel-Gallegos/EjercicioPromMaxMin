#include <stdio.h>
#include <stdlib.h>
#include "algoritmoL.h"



int utn_minimoArrayInt(int* pArray,int size,int arrancoAca, int* resultado,int* indiceMenor)
{
	int minimo;
	int retorno = -1;

	if(pArray!=NULL && resultado!=NULL && size>0)
	{
		minimo = pArray[arrancoAca];
		*indiceMenor = arrancoAca;
		for(int i=arrancoAca;i<size;i++)
		{
			if(minimo>pArray[i])
			{
				minimo=pArray[i];
				*indiceMenor = i;
			}
		}
		retorno = 0;
		*resultado = minimo;
	}
	return retorno;
}


int ordenamientoL(int* pArray,int size)
{
	int retorno=-1;
	int i;
	int minimo;
	int buffer;
	int indiceMinimo;

	int arrancoAca;
	arrancoAca=0;
/*
	 "FOR i=0 i<limite-1 i++
	1- BUSCO EL MENOR DESDE INDICE i
	IF i != indiceMinimo
		 2 - EN UN AUXILIAR GUARDO EL VALOR DEL INDICE [i]
		 3- COLOCO EL MENOR EN EL INDICE [i]
		 4- COLOCO AUX EN EL INDICE [indiceMinimo]
*/

	for(i=0;i<size;i++)
	{
		utn_minimoArrayInt(pArray,size,arrancoAca,&minimo,&indiceMinimo);
		buffer = pArray[i];
		pArray[i]=minimo;
		pArray[indiceMinimo]=buffer;
		arrancoAca++;
	}
	return retorno;
}




















