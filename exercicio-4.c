#include <stdio.h>
#include <stdlib.h>

/***Exercício 4:**
Crie uma matriz 3x3 e realize a multiplicação de todos os seus
elementos por um valor fornecido pelo usuário. Exiba a matriz
resultante.*/

int main(){
	int matriz[3][3];
	int i, j;
	int multiplicador;

// Preenchendo a matriz
	printf("Digite os elementos da matriz 3x3:\n");
	for (i = 0; i < 3; ++i){
	for (j = 0; j < 3; ++j){
		scanf("%d", &matriz[i][j]);
	}
	}
	
	puts("========Matriz 3x3 gerada================");
	for (i = 0; i < 3; i++){
	for (j = 0; j < 3; j++){
		printf("%d", matriz[i][j]);
	}
		printf("\n");
	}
	puts("========================");

// Solicitando o valor para multiplicação
	printf("Digite o valor para multiplicacao: ");
	scanf("%d", &multiplicador);

// Multiplicando os elementos da matriz
	for (i = 0; i < 3; ++i){
	for (j = 0; j < 3; ++j){
	matriz[i][j] *= multiplicador;
	}
	}
	
// Exibindo a matriz resultante
	printf("\nMatriz resultante da multiplicacao: \n");
	for (i = 0; i < 3; ++i) {
	for (j = 0; j < 3; ++j)
	printf("%d\t", matriz[i][j]);
	printf("\n");
	}

return 0;
}
