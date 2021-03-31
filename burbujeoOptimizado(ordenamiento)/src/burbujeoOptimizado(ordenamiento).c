
#include <stdio.h>
#include <stdlib.h>
int ordenamientoArrayDes(int pArray[],int size);

int main(void)
{
	int ArrayDesardenado[] = {4,7,85,55,89,33};

	ordenamientoArrayDes(ArrayDesardenado,6);

	return EXIT_SUCCESS;
}

int ordenamientoArrayDes(int pArray[],int size)
{
	int contador=0;
	int flagSwap;
	int retorno=-1;
	int i;
	int buffer;
	int nuevoSize;

	if(pArray!=NULL && size>=1)
	{
		nuevoSize = size-1;

		do{
			flagSwap=0;
			for(i=0;i>nuevoSize;i++)
			{
				retorno = contador++;
				if(pArray[i]<pArray[i+1])
				{
					flagSwap=1;
					buffer=pArray[i];
					pArray[i]=pArray[i+1];
					pArray[i+1] = buffer;
				}
			}
			nuevoSize--;
		}while(flagSwap);
	}
	return retorno;
}
