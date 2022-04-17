/*
 ============================================================================
 Name        : TP_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "Biblioteca.h"
#include <stdio.h>
#include <stdlib.h>
#define DESCUENTO 10
#define AUMENTO 25

int main(void) {
	setbuf(stdout, NULL);
	int respuesta;
	float kilometros;//Kilometros
	float aerolineas;//Aerolineas Argenrinas
	float latam;//Latam
	float descuentoDebitoAA;

	float descuentoDebitoLatam;

	float precioAumentadoAA;
	float precioAumentadoLatam;
	float precioAABTC;
	float precioLatamBTC;
	float precioUnitarioAA;
	float precioUnitarioLatam;
	float diferanciaDePrecio;




	do
	{
		printf("1) Ingresar Kilometros\n");
		printf("2) Ingresar Precios de vuelos\n");
		printf("3) Calcular Todos Los Costos\n");
		printf("4) Informar Resultados\n");
		printf("5) cargar Forzada de datos\n");
		printf("6) Salir\n");
		scanf("%d",&respuesta);


		switch(respuesta)
		{
			case 1 :
				if(PedirNumeroFlotante("Ingrese Kilometros: ", "ERROR, volver a intentar: ", 1, 1000000, &kilometros)==0)
				{
					printf("La carga fue completada\n");
				}
				else
				{
					printf("ERROR\n");
				}
				break;
			case 2 :
				if(PedirNumeroFlotante("Ingrese el precio de Aerolineas Argentinas: ", "ERROR, volver a intentar:", 1, 1000000, &aerolineas)==0
					&&
					PedirNumeroFlotante("Ingresar El precio de Latam: ", "Error, Vuelve a Intentarlo: ", 1, 1000000, &latam)==0)

				{
					printf("La carga fue completada\n");
				}
				else
				{
					printf("ERROR\n");
				}


				break;
			case 3 :


				if(CalcularDescuento(aerolineas, DESCUENTO, &descuentoDebitoAA)==0
						&&
					CalcularDescuento(latam, DESCUENTO, &descuentoDebitoLatam)==0)
				{
					printf("descuento calculado... \n");
				}
				else
				{
					printf("ERROR");
				}
				if(CalcularAumento(aerolineas, AUMENTO, &precioAumentadoAA)==0&& CalcularAumento(latam, AUMENTO, &precioAumentadoLatam)==0)
				{
					printf("aumento calculado...\n");
				}
				else
				{
					printf("ERROR");
				}
				if(DePesosAbitcoin(aerolineas, &precioAABTC)==0 && DePesosAbitcoin(latam, &precioLatamBTC)==0)
				{
					printf("precio con BTC calculado...\n");

				}
				else
				{
					printf("ERROR");

				}
				if(CalcularPrecioUnitario(aerolineas, kilometros, &precioUnitarioAA)==0
					&&
					CalcularPrecioUnitario(latam, kilometros, &precioUnitarioLatam)==0)
				{
					printf("Precio Por Kg:/n"
							"Aerolineas Argentinas: %f\n"
							"Latam: %f\n",precioUnitarioAA,precioUnitarioLatam);


				}
				else
				{
					printf("ERROR");
				}
				diferanciaDePrecio=aerolineas-latam;
				printf("diferencia de precio: %f",diferanciaDePrecio);









				break;
			case 4 :
				printf("Latam: \n"
						"Precio con tarjeta de Debito: %f\n"
						"Precio con Tarjeta de Credito: %f\n"
						"Precio Pagando con Bitcoins: %f\n"
						"Precio unitario: %f\n",descuentoDebitoLatam,precioAumentadoLatam,precioLatamBTC,precioUnitarioLatam);
				printf("aerolineas argentinas: \n"
						"Precio con tarjeta de Debito: %f\n"
						"Precio con Tarjeta de Credito: %f\n"
						"Precio Pagando con Bitcoins: %f\n"
						"Precio unitario %f\n",descuentoDebitoAA,precioAumentadoAA,precioAABTC,precioUnitarioAA);
				printf("Diferenci de precio %f/n",diferanciaDePrecio);
				break;
			case 5 :

				break;
			default :
				printf("\nError opcion no validad\n");
				break;
		}



	}while(respuesta!=6);

	return EXIT_SUCCESS;
}

