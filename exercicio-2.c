#include <stdio.h>
/*Exercício 2:**
Crie duas matrizes 2x2 e realize a soma entre elas. Armazene o
resultado em uma terceira matriz e exiba o resultado na tela.*/

int main(){
    int l1, l2, soma = 0, soma2 = 0;
    int mat[2] [2];

    for(l1 = 0; l1<2; l1++){
        printf("digite um numero: ");
        scanf("%d", &mat[0][l1]);
        soma+= mat[0][l1];
    }

    for(l2=0; l2<2; l2++){
        printf("digite um numero: ");
        scanf("%d", &mat[1][l2]);
        soma2+= mat[1][l2];
    }

     
    printf("| %d | %d |\n", mat[0] [0], mat[0] [1]);

    printf("| %d | %d |\n", mat[1] [0], mat[1] [1]);

    printf("soma = | %d | %d |\n", mat[2] [1], mat[2] [0]);
}

/*//resposta do professor:

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int i, j;
	int matriz1[2][2], matriz2[2][2], soma[2][2];
	
// Preenchendo as matrizes
	printf("Digite os elementos da primeira matriz 2x2:\n");
	for (i = 0; i < 2; ++i)
	for (j = 0; j < 2; ++j)
	scanf("%d", &matriz1[i][j]);
	
	printf("Digite os elementos da segunda matriz 2x2:\n");
	for (i = 0; i < 2; ++i)
	for (j = 0; j < 2; ++j)
	scanf("%d", &matriz2[i][j]);

// Realizando a soma
	for (i = 0; i < 2; ++i)
	for (j = 0; j < 2; ++j)
	soma[i][j] = matriz1[i][j] + matriz2[i][j];

 // Exibindo a matriz resultante
	printf("\nMatriz resultante da soma:\n");
	for (i = 0; i < 2; ++i) {
	for (j = 0; j < 2; ++j)
	
	printf("%d\t", soma[i][j]);
	printf("\n");
	}
return 0;
}*/
