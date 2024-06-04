#include <stdio.h>
#include <stdlib.h>

int main()
{

int linhas, colunas;

printf("Digite o numero de linhas de sua matriz:");
scanf("%d", linhas);
printf("Digite o numero de colunas da sua matriz:");
scanf("%d", colunas);

int matriz[linhas][colunas];

for(int i=0; i< linhas; i++){
    for(int j=0; j<colunas; j++){
        printf("Digite o valor da matriz para a posição [%d][%d]", linhas, colunas);
        scanf("%d", &matriz[i][j]);
    }
}

    return 0;
}
