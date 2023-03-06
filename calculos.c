///Prova Programacao Estruturada  - Prof. Igor Malheiros
///Yhasmim de Souza Tigre         - mat.: 20210026966
///Vinicius Vieri Bezerra de Lima - mat.: 20210027364

#include "calculos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//-------FUNÇÃO DE MÉDIA--------//

int media(int notas[], int tamanho){
  
  	int soma = 0;
	int resultado = 0;
	
	for(int i = 0; i < tamanho; i++){    //percorre o array de notas
		soma = soma  + notas[i];         //soma todos os valores de tamanho
	}	
	
	resultado = soma/tamanho;            //divide soma pelo tamanho
	
	return resultado;
}

//-------FUNÇÃO DE MEDIANA--------//

int mediana(int notas[], int tamanho){
    
	int aux = 0;
	int mediana = 0;
	
	for(int i = 0; i < tamanho; i++){    //colocando em ordem crescente
		for(int j = i + 1; j < tamanho; j++){
			if(notas[i] > notas[j]){     //verifica se o numero na posição i é maior q na posição j
			  	aux = notas[i];			 //se for maior, trocam de lugar, usando auxiliar
				notas[i] = notas[j];
				notas[j] = aux;
			}
		}
	}

	if(tamanho % 2){
		mediana = notas[tamanho/2];      //pega o valor do meio
	} 
  	else{
		mediana = (notas[tamanho/2-1] + notas[tamanho/2])/2; //pega os dois valores vizinhos do meio e divide por dois
	}  
	return mediana;
}

//-------FUNÇÃO DE MODA--------//

int moda(int notas[], int tamanho){
   
	int maior = 0;
    
    int arr_elementos [11] = {0}; 
    for(int i = 0; i < tamanho; i++){
        arr_elementos [notas[i]]++;      //coloca os elementos em array para encontrar frequencia
    }
    
    maior = arr_elementos[0];

	for(int i = 1; i < 11; i++){
		if(arr_elementos[i] > maior){    //indentificar maior elemento
            maior = i;
        }
	}
	return maior;
}

//-------FUNÇÃO DE DESVIO--------//

double descritiva(int media_notas, int array_notas[], int tamanho){
  
	double variancia = 0;
	float desvio_padrao = 0;             //primeiro, calculamos o desvio, depois a variancia usando math.h
	
	for(int i = 0; i < tamanho; i++){ 
		variancia += pow(array_notas[i] - media_notas, 2.0);
	}

	variancia = variancia / tamanho;     //com a variancia calculada, obtemos desvio padrão tirando a raiz dela
	desvio_padrao = sqrt(variancia);

	return desvio_padrao;
}

//-------FUNÇÕES MAIOR E MENOR ELEMENTO--------//

int maiorNota(int notas[], int tamanho){
  
  	int maiorNota = 0;
	for(int i = 0; i < tamanho; i++){  
		
    	if(notas[i] > maiorNota){
      		maiorNota = notas[i];        //começando em 0, percorre o array até encontrar o maior
    	}
	}
	return maiorNota;
}

int menorNota(int notas[], int tamanho){
	
	int menorNota = 10;
	for(int i = 0; i < tamanho; i++){
    	if(notas[i] < menorNota){
      		menorNota = notas[i];        //começando em 10, percorre o array até encontrar o menor
    	}
	}
	return menorNota;
}
