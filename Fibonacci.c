#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int numaleatorio(){
	int randomico;
	srand(time(NULL));
	randomico = rand() % 10;
	return randomico;
}

int main(){
	
	
	int esquerda=0, meio, direita = 0, numrepeticao = 0, quantrepeticao;
	char escolha1, repetir;
	
	
	inicio:
		
		
	fflush(stdin);
	printf("Este programa calcula a sequencia de Fibonacci a partir de um numero e quantidade de vezes de a sua escolha.\n\nGostaria de ver o funcionamento do programa sem a alteracao no numero e quantidade?\n(15 repeticoes por padrao.) (s/n)\n");
		scanf("%c", &escolha1);
		switch(escolha1){
		    case 's':
				meio = 1;
				quantrepeticao = 15;
            break;
            case 'n':
				printf("\nEscreva o numero inicial que deseja\n	(O numero deve ser menor de 10 e ha a opcao de numeros aleatorios, basta digitar '0'):\n");
				scanf("%d", &meio);
					if (meio < 1){
					meio = numaleatorio();
					}	
				printf("\nEscreva a quantidade de repeticoes que deseja(limitado a 15 repeticoes max):\n");
				scanf("%d", &quantrepeticao);		
			break;
			default:
				printf("Resposta nao aceita.\n\n\n");
				goto inicio;
		}
			


	while (numrepeticao != quantrepeticao){
		printf("%d - ", meio);
		direita = meio + esquerda;
		esquerda = meio;
		meio = direita;
		numrepeticao++;
	}
	
	final:

	printf("\n\nGostaria de reiniciar o programa para testar com outro numero e repeticao? (s/n)\n");
	fflush(stdin);
	scanf("%c", &repetir);
	switch (repetir){
	    case 's':
	    esquerda=0, meio = 0, direita = 0, numrepeticao = 0, quantrepeticao = 0;
	    goto inicio;
	    break;
	    case 'n':
	    break;
	    default:
	    	printf("Resposta nao aceita.\n\n\n");
			goto final;
	}
	
	
	return 0;
}

