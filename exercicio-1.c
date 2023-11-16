#include <stdio.h>
#include <stdlib.h>
/*Exercício 1:**
Crie uma matriz 3x3 para armazenar números inteiros. Preencha
a matriz com valores fornecidos pelo usuário e depois exiba a
matriz na tela.*/

int main(){
	
	int i;
    int l1, l2, l3;
    int mat[3][3];

	//primeira linha
	printf("-----PRIMEIRA LINHA:----\n");
    for (i= 1, l1 = 0; i <= 3, l1 < 3; i++, l1++)
    {
        printf("digite o numero %d: ", i);
        scanf("%d", &mat[0][l1]);
    }
    
    //segunda linha
 	printf("-----SEGUNDA LINHA:-----\n");
     for (i = 1, l2 = 0; i <= 3, l2 < 3; i++, l2++)
    {
        printf("digite o numero %d: ", i);
        scanf("%d", &mat[1][l2]);
    }
  
	//terceira linha
	printf("-----TERCEIRA LINHA:-----\n");
     for (i = 1, l3 = 0; i <= 3, l3 < 3; i++, l3++)
    {
        printf("digite o numero %d: ", i);
        scanf("%d", &mat[2][l3]);
    }

    //respostas
    printf("\n-----MATRIZ 3X3:-----\n");
    printf("   | %d | %d | %d |\n", mat[0] [0], mat[0] [1], mat[0] [2]);
    
    printf("   | %d | %d | %d |\n", mat[1] [0], mat[1] [1], mat[1] [2]);
 
    printf("   | %d | %d | %d |\n", mat[2] [0], mat[2] [1], mat[2] [2]);
}

/*//resposta do professor:

#include <stdio.h>
#include <stdlib.h>

int main(){

	int matriz[3][3];
	int i, j;
 // Preenchendo a matriz
 	
	printf("Digite os elementos da matriz 3x3:\n");
	
	for (i = 0; i < 3; ++i)
	for (j = 0; j < 3; ++j)
	scanf("%d", &matriz[i][j]);

// Exibindo a matriz	
	printf("\nMatriz digitada:\n");

	for (i = 0; i < 3; ++i) {
	for (j = 0; j < 3; ++j)
	
	printf("%d\t", matriz[i][j]);
	printf("\n");
	}
return 0;
}*/
