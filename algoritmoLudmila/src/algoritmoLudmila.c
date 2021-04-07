#include <stdio.h>
#include <stdlib.h>
#include "algoritmoL.h"


int main(void)
{

	/*
	 * "FOR i=0 i<limite-1 i++
    1- BUSCO EL MENOR DESDE INDICE i
    IF i != indiceMinimo
         2 - EN UN AUXILIAR GUARDO EL VALOR DEL INDICE [i]
         3- COLOCO EL MENOR EN EL INDICE [i]
         4- COLOCO AUX EN EL INDICE [indiceMinimo]
	 */
	int array[5]={4,215,15,9,5};



	ordenamientoL(array,5);
	for(int i=0;i<5;i++)
	{
		printf("%d ",array[i]);
	}

	return EXIT_SUCCESS;
}
















