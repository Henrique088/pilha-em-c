/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"




int main(){

	struct Pilha minhapilha;
	int capacidade, op;
	char palavra[50];

	printf( "\nCapacidade da pilha? " );
	scanf( "%d", &capacidade );

	criarpilha (&minhapilha, capacidade);

	while( 1 ){ /* loop infinito */

		printf("\n1- empilhar (push)\n");
		printf("2- desempilhar (POP)\n");
		printf("3- Mostrar o topo \n");
		printf("4- sair\n");
		printf("\nopcao? ");
		scanf("%d", &op);

		switch (op){

			case 1: //push

				if( estacheia( &minhapilha ) == 1 )

					printf("\nPILHA CHEIA! \n");

				else {

					printf("\nDigite a palavra: ");
					scanf("%s", &palavra);
					empilhar (&minhapilha, palavra);

				}
				break;

			case 2: //pop
				if ( estavazia(&minhapilha) == 1 )

					printf( "\nPILHA VAZIA! \n" );

				else{

					palavra[50] = desempilhar (&minhapilha);
					printf ( "\n%s DESEMPILHADO!\n", palavra );

				}
				break;

			case 3: // mostrar o topo
				if ( estavazia (&minhapilha) == 1 )

					printf( "\nPILHA VAZIA!\n" );

				else {

					palavra[50] = retornatopo (&minhapilha);
					printf ( "\nTOPO: %s\n", palavra );

				}
				break;

			case 4: 
				exit(0);

			default: printf( "\nOPCAO INVALIDA! \n" );
		}
	}
	
}
