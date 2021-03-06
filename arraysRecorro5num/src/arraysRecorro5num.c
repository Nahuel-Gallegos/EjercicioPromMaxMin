#include <stdio_ext.h>
#include <stdlib.h>
#include "utn_biblioteca.h"
#define cantidadDeNumeros 5
int ordenamientoArrayDes(int pArray[],int size);
int imprimirArrayInt(int pArray[],int size);
/*
 * Solicitar al usuario 5 números, almacenar estos en un array de enteros, permitir
 * listarlos por pantalla indicando el máximo, el mínimo y el promedio. Permitir Modificar
 * el valor de cualquiera de los números cargados indicando el índice del mismo y su nuevo valor.
 */
int main(void)
{
	int numeros[cantidadDeNumeros];
	int i;
	int maximo;
	int minimo;
	int flag=0;
	int acumulador = 0;
	float promedio;
	int respuesta=1;

	for(i=0;i<cantidadDeNumeros;i++)
	{
		utn_int(&numeros[i],"Ingrese un numero\n","numero invalido, reingrese:\n",0,1000,3);
		if(flag==0 || numeros[i]<minimo)
		{
			minimo=numeros[i];
			if(flag==0)
			{
				maximo=numeros[i];
				flag = 1;
			}
		}
		else
		{
			if(numeros[i]>maximo)
			{
				maximo=numeros[i];
			}
		}
		acumulador = acumulador + numeros[i];
	}

	printf("Los numeros ingresados son: ");
	promedio = (float)acumulador/cantidadDeNumeros;

	for(i=0;i<cantidadDeNumeros;i++)
	{
		printf("%d ",numeros[i]);
	}
	printf("\nEl numero maximo ingresado es: %d\nEl numero minimo ingresado es: %d"
			" \nY el promedio de todos los numeros ingresados es: %.2f\n",maximo,
																		minimo,
																		promedio);
	do
	{
		printf("Desea modificar el valor de alguno de los numeros ingresados?\n"
				"Ingrese el indice del valor a modificar y el nuevo valor. \nSi desea dejar de modificar "
				"valores ingrese -1");
		scanf( "%d",&respuesta);
		numeros[respuesta] = scanf("%d",&numeros[respuesta]);
	}while(respuesta<0);
	return EXIT_SUCCESS;
}

