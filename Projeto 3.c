#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(void){

int numMes;

	setlocale (LC_ALL, "Portuguese");
	
	printf("M�s do Ano:");
	printf("\n");
	printf("Entre com um n�mero entre 1 e 12: ");
	scanf("%d" ,&numMes);
	printf("\n");
	
	switch (numMes)
	{
		case 1:
			printf("M�s 1 - Janeiro\n");
		break;
		case 2:
			printf("M�s 2 - Fevereiro\n");
		break;
		case 3:
			printf("M�s 3 - Mar�o\n");
		break;
		case 4:
			printf("M�s 4 - Abril\n");
		break;
		case 5:
			printf("M�s 5 - Maio\n");
		break;
		case 6:
			printf("M�s 6 - Junho\n");
		break;
		case 7:
			printf("M�s 7 Julho\n");
		break;
		case 8:
			printf("M�s 8 - Agosto\n");
		break;
		case 9:
			printf("M�s 9 - Setembro\n");
		break;
		case 10:
			printf("M�s 10 - Outubro\n");
		break;
		case 11:
			printf("M�s 11 - Novembro\n");
		break;
		case 12:
			printf("M�s 12 Dezembro\n");
		break;
		
		default:
			printf ("O n�mero n�o se refere a nenhum m�s do ano !!! \n");			
	}
	
	return 0;
}
