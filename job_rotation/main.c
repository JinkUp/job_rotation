#include <stdio.h> 
#include <stdlib.h> 

void calculaFibonnaci();
int fibonnaci();

int vetor[1000];

void calculaFibonnaci(int i) { 

    if(i==1 || i==2) {
        vetor[i] = 1;
    }
    else { 
        vetor[i] = fibonnaci(i-1) + fibonnaci(i-2);
    }
}

int fibonnaci(int i)
{
    if(vetor[i]==0) {
        calculaFibonnaci(i);
        printf("%d ", vetor[i]);
    }
    else {
        return vetor[i];
    }   
} 

int main(int argc, char* argv[]) 
{
    int i, N;
    int *vetor;
    printf("O número informado pertence a sequência de Fibonacci : ");
    scanf("%d", &N);

    for(i=1; i<=N; i++)
        fibonnaci(i);

    return 0;
} 