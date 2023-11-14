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
