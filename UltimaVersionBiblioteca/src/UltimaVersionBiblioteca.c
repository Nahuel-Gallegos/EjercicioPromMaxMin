
#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include "utn_biblioteca.h"
/*
 * Generar un programa que adivine el numero que ingresa el usuario del 0 al 100
 */
int main(void)
{

	srand (time(NULL));
	int numeroIngresado;
	int numeroAleatorio;
	int resultado;

	numeroAleatorio = rand () % (100+1);

	do
	{

		resultado = utn_int(&numeroIngresado,"Ingrese un numero del 0 al 100:","Error, ingrese una respuesta valida",0,100,3);

		if(resultado==0)
		{
			if(numeroIngresado==numeroAleatorio)
			{
				printf("FELICIDADES EL NUMERO QUE INGRESASTE ES EL GANADOR!!");
			}
			else
			{
				if(numeroIngresado<=(numeroAleatorio-50) || numeroIngresado>=(numeroAleatorio+50))
				{
					printf("Helado...\n");
				}
				else
				{
					if(numeroIngresado<=(numeroAleatorio-20) || numeroIngresado>=(numeroAleatorio+20))
					{
						printf("frio\n");
					}
					else
					{
						if(numeroIngresado<=(numeroAleatorio-10) || numeroIngresado>=(numeroAleatorio+10))
						{
							printf("tibio\n");
						}
						else
						{
							if(numeroIngresado<=(numeroAleatorio-5) || numeroIngresado>=(numeroAleatorio+5))
							{
								printf("CALIENTE\n");
							}
							else
							{
								if(numeroIngresado<=(numeroAleatorio-5) || numeroIngresado>=(numeroAleatorio+5))
								{
									printf("DALE, MANCO PEGALE AL NUMEROO!!\n");
								}
								else
								{
									if(numeroIngresado<(numeroAleatorio) || numeroIngresado>(numeroAleatorio))
									{
										printf("Mas caliente que negra en balile, definitivamente no sos adivino..\n");
									}
								}
							}
						}
					}
				}
			}
		}
		else
		{
			printf("Ingreso demasiadas veces respuestas invalidas, juegue nuevamente.");
		}
	}while(numeroIngresado!=numeroAleatorio);

	return EXIT_SUCCESS;
}
