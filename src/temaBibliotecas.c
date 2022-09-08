/*
 ============================================================================
 Name        : temaBibliotecas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "ingresoDatos.h"


int main(void) {

	setbuf(stdout,NULL);
	char respuesta;
	int ret;
	int flag1;
	int flag2;
	flag1=0;
	flag2=0;

	respuesta='n';
	while(respuesta=='n')
	{
		switch(ret=mostrarMenu())
		{
		case 1:
			flag1=1;
			break;
		case 2:
			if(flag1==0)
		{
			printf("debe iniciar antes de procesar. \n");
		}else
		{
			flag2=1;
		}
			break;
		case 3:
			if(flag1==0)
			{
				printf("Debe iniciar antes de finalizar. \n");
			}else
			{
				if(flag2==0)
				{
					printf("Debe procesar antes de finalizar.\n");
				}
			}
			break;
		case 4:
			printf("Seguro que desea salir ? s/n");
			fflush(stdin);
			scanf("%c",&respuesta);
		}

	}
	return EXIT_SUCCESS;
}




