///Prova Programacao Estruturada  - Prof. Igor Malheiros
///Yhasmim de Souza Tigre         - mat.: 20210026966
///Vinicius Vieri Bezerra de Lima - mat.: 20210027364

#include <stdio.h>
#include <stdlib.h>
#include "limpeza.h"
#include "calculos.h"
#include "histograma.h"
#define tamanho 13

int main(){
    
    //array inicial
    int notas[tamanho] = {5, 3, 3, 8, 7, 10, 10, -5, 2, 7, 12, 9, 10};
    
    //notas limpas
    limpeza_maior(notas, tamanho);
    limpeza_menor(notas, tamanho);

    //cabeçalho
    printf("------------------------------------\n");
    printf("  PROGRAMACAO ESTRUTURADA - CI      \n");    
    printf("------------------------------------\n");
    printf(" Aluno: Vinicius Vieri 20210027364  \n"); 
    printf(" Aluna: Yhasmim  Tigre 20210026966  \n");
    printf("------------------------------------\n");
    printf("              PROVA 1               \n");
    printf("------------------------------------\n");


    //retorna media      
    printf("Media das notas:         %d\n", media(notas, tamanho));

    //retorna mediana
    printf("------------------------------------\n");    
    printf("Mediana das notas:       %d\n", mediana(notas, tamanho));

    //retorna moda
    printf("------------------------------------\n");
    printf("Moda das notas:          %d\n", moda(notas, tamanho));

    //retorna desvio padrão
    printf("------------------------------------\n");    
    printf("Desvio padrao das notas: %lf\n", descritiva(media(notas,tamanho), notas, tamanho));

    //retorna nota maior
    printf("------------------------------------\n");    
    printf("Maior nota:              %d\n", maiorNota(notas, tamanho));

    //retorna nota maior
    printf("------------------------------------\n");    
    printf("Menor nota:              %d\n", menorNota(notas, tamanho));

    printf("\n");

    //retorna histograma
    printf("------------Histograma--------------\n");    
    histograma(notas, tamanho);
    printf("------------------------------------");
 
    return 0;
}

