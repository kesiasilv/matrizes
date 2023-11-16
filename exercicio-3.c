#include <stdio.h>

/*Exercício 3:**
Crie uma matriz 4x4 e preencha-a com números aleatórios. Em
seguida, calcule e imprima a soma de cada linha e de cada
coluna.*/

//----considere a resposta do professor que esta depois dessa:----

/*int main(){

    int l1, l2, l3, l4, somal1 = 0, somal2 = 0, somal3 = 0, somal4 = 0, coluna = 0;
    int mat[4][4];

    for(l1 = 0; l1<4; l1++){
        printf("digite um numero: ");
        scanf("%d", &mat[0][l1]);
        somal1+= mat[0][l1];
    }

    for(l2=0; l2<4; l2++){
        printf("digite um numero: ");
        scanf("%d", &mat[1][l2]);
        somal2+= mat[1][l2];
    }

    for(l3 = 0; l3<4; l3++){
        printf("digite um numero: ");
        scanf("%d", &mat[2][l3]);
        somal3+= mat[2][l3];
    }

    for(l4=0; l4<4; l4++){
        printf("digite um numero: ");
        scanf("%d", &mat[3][l4]);
        somal4+= mat[3][l4];
    }

    coluna = somal1 + somal2 + somal3 + somal4;

    printf("\n | %d | %d | %d | %d |\n", mat[0] [0], mat[0] [1], mat[0] [2], mat[0] [3]);

    printf(" | %d | %d | %d | %d |\n", mat[1] [0], mat[1] [1], mat[1] [2], mat[1] [3]);
   
    printf(" | %d | %d | %d | %d |\n", mat[2] [1], mat[2] [0], mat[2] [2], mat[2] [3]);

    printf(" | %d | %d | %d | %d |\n", mat[2] [1], mat[2] [0], mat[3] [2], mat[3] [3]);

    printf("\nsoma da linha 1: %d\n", somal1);
    printf("soma da linha 2: %d\n", somal2);
    printf("soma da linha 3: %d\n", somal3);
    printf("soma da linha 4: %d\n", somal4);
    printf("soma das 4 colunas: %d\n", coluna);

}*/

//--------resposta do professor:----------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//ex: 3
int main() {

	int matriz[4][4];
	int i, j;
	int somaLinha = 0;
	int somaColuna = 0;
	
	srand(time(NULL));
//Preenchendo a matriz com números aleatórios
	for (i = 0; i < 4; i++)
	for (j = 0; j < 4; j++)
	matriz[i][j] = rand() % 11;

// Exibindo a matriz
	printf("\nMatriz aleatoria 4x4:\n");
	for (i = 0; i < 4; i++) {
	for (j = 0; j < 4; j++)
	printf("%d\t", matriz[i][j]);
	printf("\n");
	}

// Calculando e exibindo a soma de cada linha e coluna
	printf("\nSoma de cada linha:\n");
	for (i = 0; i < 4; i++) {
	for (j = 0; j < 4; j++)
	somaLinha += matriz[i][j];
	printf("Linha %d: %d\n", i + 1, somaLinha);
	}
	
	printf("\nSoma de cada coluna:\n");
	for (j = 0; j < 4; j++) {
	for (i = 0; i < 4; i++)
	somaColuna += matriz[i][j];
	printf("Coluna %d: %d\n", j + 1, somaColuna);
	}
return 0;
}
