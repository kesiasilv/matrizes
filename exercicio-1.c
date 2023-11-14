#include <stdio.h>
/*Exercício 1:**
Crie uma matriz 3x3 para armazenar números inteiros. Preencha
a matriz com valores fornecidos pelo usuário e depois exiba a
matriz na tela.*/

int main()
{

    int l1, l2, l3;
    int mat[3][3];

    for (l1 = 0; l1 < 3; l1++)
    {
        printf("digite um numero: ");
        scanf("%d", &mat[0][l1]);
    }
 
     for (l2 = 0; l2 < 3; l2++)
    {
        printf("digite um numero: ");
        scanf("%d", &mat[1][l2]);
    }
  

     for (l3 = 0; l3 < 3; l3++)
    {
        printf("digite um numero: ");
        scanf("%d", &mat[2][l3]);
    }


    
    printf("| %d | %d | %d |\n", mat[0] [0], mat[0] [1], mat[0] [2]);

    
    printf("| %d | %d | %d |\n", mat[1] [0], mat[1] [1], mat[1] [2]);

   
    printf("| %d | %d | %d |\n", mat[2] [0], mat[2] [1], mat[2] [2]);

}
