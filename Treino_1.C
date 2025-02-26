#include <stdio.h>

int main()
{
    int vetor[7] = { 8, 3, 9, 15, 6, 14, 2 };
    int tamanho = 7;
    

    for(int i = 0; i < tamanho; i++){
        printf("O valor na posição %d tem valor %d\n", i, vetor[i]);
        
    }

    return 0;
}