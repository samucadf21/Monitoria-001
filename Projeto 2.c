#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main() {

float val1 = 0 ,val2 = 0, media = 0;



	setlocale (LC_ALL, "Portuguese");
	
	printf("Entre com um n�mero entre 15 e 100:");
	scanf("%f" ,&val1);
	printf("Entre com outro n�mero entre 15 e 100:");
	scanf("%f" ,&val2);
	med = (val1 + val2) /2;
	printf("A m�dia dos dois n�meros �: %3f" ,media);

	
	return 0;
}
