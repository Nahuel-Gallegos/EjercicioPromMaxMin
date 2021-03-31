
#include <stdio_ext.h>
#include <stdlib.h>
#include "utn_biblioteca.h"

int main(void)
{
	int numeroIngresado;
	int resultado;

	resultado = (utn_int(&numeroIngresado, "Ingrese un numero del 0 al 100:\n", "Error, el numero debe ser entre 0 y 100\n",0,100,3));
	if(resultado==0)
	{
		printf("El numero ingresado es: %d",numeroIngresado);
	}
	else
	{
		printf("INGRESO DEMASIADAS VECES RESPUESTAS INVALIDAS");
	}
	return EXIT_SUCCESS;
}


/*
int getNumero(int *pNum,char*pTexto,char*pError,
		int minimo,
		int maximo,int reintento)
{
	int retorno=-1;
​
	do{
		printf("%s",pTexto);
​
		//fflush(stdin); // windorrrrrrrrr
		__fpurge(stdin); // linux #include <stdio_ext.h>
		if(scanf("%d",pNum)==1)//por parametro el scanf devuelve 1 cuando convierte a numero y 0 cuando no pudo convertirlo
		{
			if((*pNum)>=minimo && (*pNum)<=maximo)
			{
				retorno=0;
​
				break; // opcion 1
				//reintento=-1; // opcion2
			}
			else
			{
				printf("%s",pError);
				reintento--;
			}
		}
		else
		{
			printf("%s",pError);
			reintento--;
		}
	}
	while(reintento>0);
​
​
	return retorno;
}*/
