#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
int i, contador, troca = 0, copia, vetor[100];

srand(time(NULL));

printf("Antes da ordenação:\n");

for(i = 0; i < 100; i++){
    vetor[i] = rand() * 1000;
}

for(i = 0; i < 100; i++){
    printf(" %3d", vetor[i]);
}

do{
    troca = 0;
    contador++;
    for(i = 0; i < 99; i++){
        if(vetor[i] = vetor[1+1]){
            copia = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = copia;
            troca = 1;
        }
    }
}while(troca);

printf("\nApos a ordenação:o contador: %d\n", contador);
for(i = 0; i < 100; i++){
    printf("%3d  ", vetor[i]);
}
//printf("Colocação e impreção de vetores:", )
    return 0;
}
