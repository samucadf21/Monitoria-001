#include <stdio.h>
#include <locale.h>
#include <math.h>

/*Informar o total de calorias, a partir dos valores de cada item*/

int main(void) {
  
int prato,calPrato, sobremesa, calSobremesa , bebida, calBebida, calorias;

 printf("Digite o numero do prato:\n");
 printf("\n");
 printf("1 - 'Vegetariano'\n");
 printf("2 - 'Peixe' \n");
 printf("3 - 'Frango'\n");
 printf("4 - 'Carne'\n");
 scanf("%d", &prato);
 printf("\n");
 
 if (prato==1){
 	calPrato=180;
 	prato=calPrato;
 }
 	else if (prato==2){
 		calPrato=230;
 		prato=calPrato;
 	}
 		else if (prato==3){
			calPrato=250;
			prato=calPrato;
 		}
 			else if (prato==4){
 		 		calPrato=350;
 		 		prato=calPrato;
 			}
 
 printf("Digite o numero da sobremesa: \n");
 printf("\n");
 printf("1 - 'Abacaxi'\n");
 printf("2 - 'Sorvete Diet'\n");
 printf("3 - 'Mouse Diet'\n");
 printf("4 - 'Mouse Chocolate'\n");
 scanf("%d",&sobremesa);
 printf("\n");

 if (sobremesa==1){
 	calSobremesa=75;
 	sobremesa=calSobremesa;
 }
 	else if (sobremesa==2){
 	calSobremesa=110;
 	sobremesa=calSobremesa;
 	}
 		else if (sobremesa==3){
 			calSobremesa=170;
 			sobremesa=calSobremesa;
 		}
 			else if(sobremesa==4){
 				calSobremesa=200;
 				sobremesa=calSobremesa;;
 			}

 printf("Digite o numero da Bebida: \n");
 printf("\n");
 printf("1 - 'Cha'\n");
 printf("2 - 'Suco Laranja'\n");
 printf("3 - 'Suco Melao'\n");
 printf("4 - 'Refrigerante Diet'\n");
 scanf("%d",&bebida);
 printf("\n");

 if (bebida==1){
 	calBebida=20;
 	bebida=calBebida;
 }
 	else if (bebida==2){
 		calBebida=75;
 		bebida=calBebida;
 	}
 		else if (bebida==3){
 			calBebida=100;
 			bebida=calBebida;
 		}
 			else if (bebida==4){
 				calBebida=65;
 				bebida=calBebida;
 			}
  
	calorias = (prato+sobremesa+bebida);
		   
    	
	printf("Total de calorias da sua refeicao: %3d \n", calorias);
    printf("\n\n");
	system("pause");

  
  
  return 0;
}
