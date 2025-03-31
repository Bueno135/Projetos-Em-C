#include <stdio.h>

int main()
{

	int vetor[] = { 8, 3, 9, 15, 6, 14, 2 };
	int tamanho = 7;
	int menor = vetor[0];
    int maior = vetor[0];

	for(int i = 0; i < tamanho; i++) {
		if(vetor[i] < menor) {
			menor = vetor[i];
		}
		if(vetor[i] > maior) {
			maior = vetor[i];
		}
	}
	printf("O menor numero do vetor é %d \n", menor);
	printf("O maior numero do vetor é %d", maior);
	return 0;

}