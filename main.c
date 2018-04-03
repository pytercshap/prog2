#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void batedeira(char *n1, char *n2, int *vl1, int *vl2){

	char troca1[130], troca2[130], aux[130];
	int i, tamNome1=0, tamNome2=0, calc1=0, calc2=0;

	tamNome1 = strlen(n1);
	tamNome2 = strlen(n2);

	printf("\nTamanho name - 1: %d\nTamanho name - 2: %d",tamNome1,tamNome2);

	calc1 = tamNome1 + *vl1;
	calc2 = tamNome2 + *vl2;

	printf("\n\nValor de Inicio - 1: %d\nValor de inicio - 2: %d",*vl1,*vl2);

	printf("\nCalculo 1: %d", calc1);
	printf("\nCalculo 2: %d", calc2);

	printf("\n\nnome ao contrario - 1: ");
	for (i = tamNome2; i >= 0; --i) {
    printf("%c", n2[i]);
	}

	printf("\nnome ao contrario - 2: ");
	for (i = tamNome1; i >= 0; --i) {
    printf("%c", n1[i]);
	}


}


int main(){

	char n1[130];
	char n2[130];
	int vl1;
	int vl2;

	printf("\nentre com o nome - 1: ");
	gets(n1);
	printf("\nentre com o nome - 2: ");
	gets(n2);

	printf("\nentre com o primeiro numero: ");
	scanf("%d",&vl1);
	printf("\nentre com o Segundo numero: ");
	scanf("%d",&vl2);


	batedeira(&n1,&n2,&vl1,&vl2);

	return 0;

}


