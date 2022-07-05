#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(char *argv[], int argc){

float n, intervaloEnt=0, intervaloSai=0, val;
	
	setlocale (LC_ALL, "Portuguese");
	
	for(n=0; n<10; n++){
	printf("Entre com um Valor: ");
	scanf("%f", &val);
	
	if(val>=10 && val<=20){
		intervaloEnt++;
	}
		else{
			intervaloSai++;
	}
	}
	
	printf(" Dentro do intervalo de 10 e 20: %f", intervaloEnt);
	printf("\n");
	printf(" Fora do intervalo de 10 e 20: %f", intervaloSai);
		
  return 0;
}
