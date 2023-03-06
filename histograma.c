///Prova Programacao Estruturada  - Prof. Igor Malheiros
///Yhasmim de Souza Tigre         - mat.: 20210026966
///Vinicius Vieri Bezerra de Lima - mat.: 20210027364

#include "histograma.h"
#include <stdio.h>

void histograma(int num[], int tamanho){
    
  int histo[11] = {0};                    
    for(int i = 0; i < tamanho; i++){         //percorre o array de num e adiciona em histo
        histo[num[i]]++;
    }
    for (int i = 0; i < 11; i++){             //imprime de 0 à 10 em duas casas decimais
        printf("%.2d  ",i);      
        for (int j = 0; j < histo[i]; j++){   //imprime as estrelas em quantas vezes a nota aparece
            printf("*");
                    
        }
        putchar('\n');                        //passa para a proxima linha
    }
}