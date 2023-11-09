/***************************************************************************
Este algoritmo  registra "N" elementos em ordem crescente.

Imprime o registro ordenado e a quantidade de elementos.

****************************************************************************/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define MAX 35		// Diminui o valor para evitar o line feed na exição da lista cheia

typedef struct
{
	int key;
} REG;

typedef struct
{
	REG LL[MAX];
	int nElem;
} LISTA;

//		Cabeçalho das funções do sistema

void inicia(LISTA*);
void exibe(LISTA*);
int busca(LISTA*, int);
bool insere(LISTA*, int);
void exclui(LISTA*, int);

int main ()
{
	char opcao = '1', val;
	LISTA LLinear;
	while(opcao!='0')
	{
		system("cls");
	    printf("==========>Menu<==========\n");
	    printf("__________________________\n");
	    printf("      1-->Inserir\n");
	    printf("      2-->Buscar\n");
        printf("      3-->Exibir\n");
        printf("      4-->Excluir\n");
        printf("      5-->Inicializar\n");
	    printf("      0-->Sair\n");
	    printf("__________________________\n");   
	    printf("\nOpcao: ");
        opcao = getche();
		system("cls");

		switch(opcao)
		{
			case '1':{			// inserir
				    printf("\nDigite o valor do elemento: "); 
				    scanf ("%d", &val);

				    if (insere(&LLinear, val) == false)
						printf("Elemento nao pode ser inserido na lista\n");
					else
						printf("Inserido com sucesso\n");
						
					printf("\n\n\nAperte qualquer tecla para continuar.\n");
					getch();
				    break;
                   }
                   
            case '2':{ 			// buscar
            		int x;
                    printf("\nDigite o valor procurado : ");
                    scanf ("%d", &val);
                    x = busca(&LLinear, val);
                    if (x == -1)
						printf("Valor %d nao foi encontrado na lista\n",val);
					else
						printf("O valor encontra-se na posicao %d\n", x);
						
					printf("\n\n\nAperte qualquer tecla para continuar.\n");
					getch();
                    break;
                   }
                           
			case '3':{			// exibir
                    exibe(&LLinear);
                    
					printf("\n\n\nAperte qualquer tecla para continuar.\n");
					getch();
                    break;
                   }
                   
            case '4':{ 			// excluir
            		int x;
                    printf("\nDigite o valor a ser excluido : ");
                    scanf ("%d", &val);
                    x = busca(&LLinear, val);
                    if (x == -1)
						printf("Valor %d nao foi encontrado na lista\n",val);
					else
					{
                    	exclui(&LLinear, x);
						printf("Excluido com sucesso\n");
					}
					
					printf("\n\n\nAperte qualquer tecla para continuar.\n");
					getch();
                    break;       
                   }
                   
            case '5':{ 			// inicializar
					inicia(&LLinear);
					printf("Lista zerada\n");
					
					printf("\n\n\nAperte qualquer tecla para continuar.\n");
					getch();
                    break;
                   }
		}	
	}

}

void inicia(LISTA* L)
{
	L->nElem = 0;
}

void exibe(LISTA* L)
{
	int i, x = L->nElem;
	printf("Lista : \n");
	for (i=0 ; i <x ; i++)				// exibe os indices
		printf(" %2d",i);

	if (x != 0)
	{
		printf("\n%c",201);
		for (i=0 ; i <x-1 ; i++)		// exibe a borda superior
			printf("%c%c%c",205,205,203);
		printf("%c%c%c\n",205,205,187);
	}

	if (x != 0)
	{
	for (i = 0 ; i<x ; i++)				// exibe o conteúdo
		printf("%c%2d",186,L->LL[i].key);
	printf("%c",186);
	}

	if (x != 0)
	{
		printf("\n%c",200);
		for (i=0 ; i <x-1 ; i++)		// exibe borda inferior
			printf("%c%c%c",205,205,202);
		printf("%c%c%c\n",205,205,188);
	}

    printf("\n\nQuantidade de elementos da lista %d\n",x);
}

int busca(LISTA* L, int K)
{
	int i = 0;
	while (i < L->nElem)
		if (K == L->LL[i].key)
			return i;
		else
			i++;
	return -1;
}

/* A função de inserção é feita de forma ordenada crescente, 
cada novo valor é comparado desde o último, para saber em que 
posição deve ser inserido. Enquanto não é encontrada a posição 
do novo valor, os valores maiores são realocados uma posição 
acima. */

bool insere(LISTA* L, int K)
{
	int j;
	j = L->nElem;
	if (j == MAX)
		return false;
	for ( ; j > 0 ; j--)
		if (K > L->LL[j-1].key)
			break;
		else
			L->LL[j].key = L->LL[j-1].key;
	L->LL[j].key = K;
	L->nElem++;
	return true;
}

void exclui(LISTA* L, int j)
{
	int i;
	for (i = j ; i < L->nElem-1 ; i++)
		L->LL[i].key = L->LL[i+1].key;
	L->nElem--;
}