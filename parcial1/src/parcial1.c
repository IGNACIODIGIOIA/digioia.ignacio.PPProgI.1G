/*
 ============================================================================
 Name        : parcial1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int id;
	char nombre[20];
	char tipo;
	float efectividad;
}eVacuna;

float aplicarAumento(float producto);
int reemplazarCaracteres(char* cadena,char a, char b)
int ordenarVacunas(eVacuna* list, int len, int order);

int main(void) {
// 1.	Crear una función llamada aplicarAumento que reciba como parámetro el precio de un producto
//y devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main. *
//2.Crear una función que se llame reemplazarCaracteres que reciba una cadena de caracteres
//como primer parámetro, un carácter como segundo y otro carácter como tercero, la misma deberá
//reemplazar cada ocurrencia del segundo parámetro por el tercero y devolver la cantidad de
//veces que se reemplazo ese carácter en la cadena *
//3.Dada la siguiente estructura generar una función que permita ordenar un array de dicha estructura por tipo.
//Ante igualdad de tipo deberá ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main. *


	float valorProducto = 102;
	char hola[] = "HOLA";
	    char a = 'A';
	    char b = 'b';



aplicarAumento(valorProducto);
printf("%d",reemplazarCaracteres("HOLA",a,b));




	return EXIT_SUCCESS;
}


float aplicarAumento(float producto)
		{


			producto += (producto*5)/100;

			printf("%.2f", producto);
			return 0;

		}

int reemplazarCaracteres(char* cadena,char a, char b)
   {
   int contador = 0;

       int largo = strlen(cadena);

       for(int i = 0; i>largo;i++)
       {
           if(cadena[i] == a)
           {
               cadena[i] = b;
               contador++;
           }
       }
       return contador;
   }
int ordenarVacunas(eVacuna* list, int len, int order)
{
	int respuesta = -1;
	eVacuna bufferVacuna;
	if(list != NULL && len > 0)
	{
		respuesta = 0;
		for (int i = 0; i < len-1; i++)
		{
			for (int j = i; j < len; j++)
			{
				if(order == 1)
				{

						if (strcmp(list[i].tipo, list[j].tipo) == 0)
						{
							if(list[i].efectividad > list[j].efectividad)
							{
								bufferVacuna = list[j];
								list[j] = list[i];
								list[i] = bufferVacuna;
							}
						}
						else if(strcmp(list[i].tipo, list[j].tipo) > 0)
						{
							bufferVacuna = list[j];
							list[j] = list[i];
							list[i] = bufferVacuna;
						}

				}
			}
		}
	}
	return respuesta;
}
