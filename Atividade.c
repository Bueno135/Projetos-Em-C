#include <stdio.h>
#include <stdlib.h>

const int TAM_VETOR = 10;

void maxMin_1(int vet[], int *max, int *min);  
void maxMin_2(int vet[], int *max, int *min);  
void maxMin_3(int vet[], int *max, int *min);

int main(){

    int vetor []= {9,8,7,6,5,4,3,2,1,0};
    int maximo, minimo;
    int maximo2, minimo2;
    int maximo3, minimo3;

    maxMin_1(vetor, &maximo, &minimo);  
    printf("O valor maximo é: %d\n", maximo);
    printf("O valor minimo é: %d\n", minimo);

    maxMin_2(vetor, &maximo2, &minimo2);  
    printf("O valor maximo é: %d\n", maximo2);
    printf("O valor minimo é: %d\n", minimo2);

    maxMin_3(vetor, 0, TAM_VETOR - 1, &maximo3, &minimo3);
    printf("maxMin_3 -> Máximo: %d, Mínimo: %d\n", maximo3, minimo3);

    return 0;
}

void maxMin_1(int vet[TAM_VETOR], int *max, int *min){
    *max = vet[0];
    *min = vet[0];
    int i;
    for (i = 1; i <TAM_VETOR; i++){
        if (vet[i] > *max ){
            *max = vet[i];
        }
        if (vet[i] < *min ){
            *min = vet[i];
        }
    }
}

void maxMin_2(int vet[TAM_VETOR], int *max, int *min){
    *max = vet[0];
    *min = vet[0];
    int i;

    if (TAM_VETOR % 2 != 0) {
        *max = *min = vet[0];
        i = 1;
    } else {
        if (vet[0] > vet[1]) {
            *max = vet[0];
            *min = vet[1];
        } else {
            *max = vet[1];
            *min = vet[0];
        }
        i = 2;
    }
    for (; i < TAM_VETOR - 1; i += 2) {
        int maior, menor;
        if (vet[i] > vet[i + 1]) {
            maior = vet[i];
            menor = vet[i + 1];
        } else {
            maior = vet[i + 1];
            menor = vet[i];
        }
        if (maior > *max) *max = maior;
        if (menor < *min) *min = menor;
    }
}
void maxMin_3(int vet[TAM_VETOR], int inicio, int fim, int *max, int *min) {
    if (inicio == fim) {  
        *max = *min = vet[inicio];
        return;
    }

    if (fim == inicio + 1) {  
        if (vet[inicio] > vet[fim]) {
            *max = vet[inicio];
            *min = vet[fim];
        } else {
            *max = vet[fim];
            *min = vet[inicio];
        }
        return;
    }

    int meio = (inicio + fim) / 2;
    int maxEsq, minEsq, maxDir, minDir;

    maxMin_3(vet, inicio, meio, &maxEsq, &minEsq);
    maxMin_3(vet, meio + 1, fim, &maxDir, &minDir);

    *max = (maxEsq > maxDir) ? maxEsq : maxDir;
    *min = (minEsq < minDir) ? minEsq : minDir;
}

