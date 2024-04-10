/*
 ============================================================================
 Name        : AedesPRJ.c
 Author      : davi
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//Abre o arquivo para escrita
	FILE *arquivo = fopen("Exemplo.txt", "w");
	//Verifica se o arquivo foi aberto com sucesso para a escrita
	if (arquivo != NULL){
		//Escreve o texto no arquivo
		fprintf(arquivo, "Hello World");

		//Fecha o arquivo de escrita
		fclose(arquivo);
		printf("Texto gravado com sucesso.\n");
	}else{
		//Se houver erro na abertura do arquivo para escrita
		printf("Erro ao abrir o arquivo para escrita\n");
		return 1; //Retorna um código de erro
	}

	//Abre o arquivo para leitura
	arquivo = fopen("Exemplo.txt", "r");

	//verifica se o arquivo foi aberto com sucesso para leitura
	if (arquivo != NULL) {
		char linha[100];//Define um buffer para armazenar a linha lida

		//Lê e imprime cada linha do arquivo
		while (fgets(linha, sizeof(linha),arquivo) !=NULL) {
			printf("Conteúdo lido do arquivo: %s", linha);
		}

		//fecha o arquivo de leitura
		fclose(arquivo);
	}else{
		//se houver erro na abertura do arquivo para leitura
		printf("Erro ao abrir o arquivo para leitura.\n");
		return 1; // Retorna um código de erro
	}
	return 0;
}

