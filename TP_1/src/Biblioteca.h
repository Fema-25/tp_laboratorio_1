/*
 * Biblioteca.h
 *
 *  Created on: 13 abr. 2022
 *      Author: franc
 */
#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

int PedirNumeroFlotante(char mensaje[],char mensajeError[],int minimo,int maximo,float* entero);
int PrecioTotal(int unidad,int precio);
int CalcularDescuento (float precio, int porcentaje, float* resultado );
int CalcularAumento (float precio, int  porcentaje, float* resultado );
int DePesosAbitcoin (float pesosArg, float* resultado);
int CalcularPrecioUnitario (float dividendo, float divisor, float* resultado );






#endif /* BIBLIOTECA_H_ */
