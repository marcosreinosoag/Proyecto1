/*
 * array.c
 *
 *  Created on: 30 mar. 2021
 *      Author: marco
 */
#include "array.h"
#include <stdio.h>
#include <stdlib.h>

int arr_calcularMaximoInt(int array[],int limite, int* resultado)
{
	int retorno=-1;
	int maximo;
	if(array!=NULL && limite>0 && resultado !=NULL)
	{
		retorno=0;
		for(int i=0;i<limite;i++)
		{
			if(i==0 || array[i]>maximo)
			{
				maximo = array[i];
			}
		*resultado = maximo;
		retorno=0;
		}
	return retorno;
	}
}

int arr_calcularMinimoInt(int* array,int limite, int* resultado)
{
	int retorno=-1;
	int minimo;
	if(array!=NULL && limite>0 && resultado !=NULL)
	{
		retorno=0;
		for(int i=0;i<limite;i++)
		{
			if(i==0 || array[i]<minimo)
			{
				minimo = array[i];
			}
		retorno=0;
		}
		*resultado = minimo;
	}
	return retorno;
}
int arr_calcularPromedioInt(int* array,int limite, float* resultado)
{
	int retorno=-1;
	float bufferPromedio;
	int acumulador=0;
	int contador=0;
	if(array!=NULL && limite>0 && resultado !=NULL)
	{
		for(int i=0;i<limite;i++)
		{
			acumulador+=array[i];
			contador++;
			retorno=0;
		}
	}
	bufferPromedio=(float)acumulador/contador;
	*resultado=bufferPromedio;
	return retorno;
}
int arr_calcularSumaInt(int* array,int limite, float* resultado)
{
	int retorno=-1;
	float bufferSuma;
	int acumulador=0;
	int contador=0;
	if(array!=NULL && limite>0 && resultado !=NULL)
	{
		for(int i=0;i<limite;i++)
		{
			acumulador+=array[i];
			contador++;
			retorno=0;
		}
	}
	bufferPromedio=(float)acumulador/contador;
	*resultado=bufferPromedio;
	return retorno;
}
