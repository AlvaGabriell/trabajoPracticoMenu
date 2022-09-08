/*
 * ingresoDatos.c
 *
 *  Created on: 8 sep. 2022
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>
#include "ingresoDatos.h"


int mostrarMenu()
{
	int opcion;
	printf("Ingrese opcion : ");
	printf("\n1- Iniciar : ");
	printf("\n2- Procesar");
	printf("\n3- Finalizar : ");
	printf("\n4- Salir ");
	scanf("%d",&opcion);
	return opcion;
}
