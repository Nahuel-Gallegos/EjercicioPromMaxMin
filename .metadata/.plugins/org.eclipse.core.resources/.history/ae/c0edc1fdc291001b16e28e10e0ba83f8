#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#define CantidadEdades 5

/*
 * hacer una funcion
 * en el main pedir una cantidad de edades
 * maximo
 * minimo
 * promedio
 */
int utn_maximoArrayInt(int* edadesArray,int size,int* resultado);
int main(void)
{
	int edadesArray[5];
	int maximo;
	int minimo;
	float promedio;

	edadesArray[0] = 32;
	edadesArray[1] = 50;
	edadesArray[2] = 15;
	edadesArray[3] = 80;
	edadesArray[4] = 27;

	utn_maximoArrayInt(edadesArray,CantidadEdades,&maximo);
	printf("Maximo es %d\n",maximo);
	utn_minimoArrayInt(edadesArray,CantidadEdades,&minimo);
	printf("Minimo es %d\n",minimo);
	utn_promedioArrayInt(edadesArray,CantidadEdades,&promedio);
	printf("Promedio es %.2f\n",promedio);

	return EXIT_SUCCESS;
}























