#include <stdio.h>
#include <stdlib.h>

int main(){
float mat[2][2];
int m, k;

for(m = 0; m < 2; m++){
    for(k =0; k < 2; k++)
    printf("Digite as notas do aluno %d%d: \n", m, k);
    scanf("%f%f", &mat[m][k]);
}
for(m = 0; m < 2; m++){
    for(k = 0; k < 2; k++)
    printf("\n");
    printf("As notas dos alunos são %d: ", m, k, mat[m][k]);
    printf("\n");
}
    return 0;
}
