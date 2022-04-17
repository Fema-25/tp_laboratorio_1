#include <stdio.h>
#include "Biblioteca.h"
#include <ctype.h>
#include <limits.h>
int PedirNumeroFlotante(char mensaje[],char mensajeError[],int minimo,int maximo, float* entero){
	int retorno;
	float resultado;
	retorno=-1;
	if(mensaje!= NULL && mensajeError != NULL  && maximo>0 && entero != NULL)
	{
		printf("%s",mensaje);
		scanf("%f",&resultado);

		while(resultado<minimo && resultado>maximo)
		{
			printf("%s",mensajeError);
			scanf("%f",&resultado);

		}
		*entero=resultado;
		retorno=0;
	}



	return retorno;
}

int CalcularDescuento (float precio, int porcentaje, float* resultado )
{
    int retorno = -1;

    if ( precio >= 0 &&  porcentaje > 0 &&  porcentaje < 100 && resultado != NULL){

        retorno = 0;

        *resultado = precio*porcentaje / 100;
        *resultado = precio - (*resultado);
    }

    return retorno;

}




int CalcularAumento (float precio, int  porcentaje, float* resultado )
{
    int retorno = -1;

    if ( precio >= 0 &&  porcentaje > 0  && resultado != NULL){

        retorno = 0;
        *resultado = precio*porcentaje/100;
        *resultado = precio + (*resultado);
    }

    return retorno;
}

int DePesosAbitcoin (float pesosArg, float* resultado)
{
    int vereficacion = -1;

    if (pesosArg > 0)
    {

        *resultado = (1 * pesosArg) / 4606954.55;
        vereficacion = 0;
    }
    return vereficacion;
}

int CalcularPrecioUnitario (float dividendo, float divisor, float* resultado )
{
	int retorno = -1;

	if (resultado != NULL && divisor != 0 &&  dividendo > 0) {

		retorno = 0;

		*resultado = dividendo / divisor;
	}

	return retorno;
}




