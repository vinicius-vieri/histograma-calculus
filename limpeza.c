///Prova Programacao Estruturada  - Prof. Igor Malheiros
///Yhasmim de Souza Tigre         - mat.: 20210026966
///Vinicius Vieri Bezerra de Lima - mat.: 20210027364

#include "limpeza.h"

//-------FUNÇÃO DE LIMPEZA--------//

void limpeza_menor(int num[], int tamanho){
  
	for(int i = 0; i < tamanho; i++){
		if (num[i] < 0){              //para numero menores que 0
			num[i] = 0;
		}
	}
}

void limpeza_maior(int num[], int tamanho){
	for(int i = 0; i < tamanho; i++){
		if (num[i] > 10){             //para numero maiores que 10
			num[i] = 10;
		}
	}

}