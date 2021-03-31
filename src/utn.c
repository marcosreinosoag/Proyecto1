/*
 * utn.c
 *
 *  Created on: 30 mar. 2021
 *      Author: marco
 */
#include <stdio.h>
#include <stdlib.h>

int utn_getInt(int* pResultado, char* mensaje,char* mensajeError,int minimo,int maximo, int reintentos)
{
	int retorno=-1;
	int bufferInt;
	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo)
	{
		retorno=-2;
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%d",bufferInt);
			if(bufferInt>=minimo && bufferInt<=maximo)
			{
				retorno=0;
				*pResultado=bufferInt;
				break;
			}
			printf("%s", mensajeError);
			reintentos--;
		}while(reintentos<=0);
	}
	return retorno;
}

int utn_getChar(char* pResultado, char* mensaje,char* mensajeError,char minimo,char maximo, int reintentos)
{
	int retorno=-1;
	int bufferChar;
	if(pResultado !=NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo)
	{
		retorno=-2;
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c",bufferChar);
			if(bufferChar>=minimo && bufferChar<=maximo)
			{
				retorno=0;
				*pResultado=bufferChar;
				break;
			}
			printf("%s", mensajeError);
			reintentos--;
		}while(reintentos<=0);
	}
	return retorno;
}
