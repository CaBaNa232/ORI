#include<stdio.h>
#include<string.h>

int main(){
	
	FILE *aula02;
	aula02 = fopen("teste.bin", "w");
	
	printf("Arquivo com variavel indicador de tamanho");
	printf("\nEscrevendo arquivo\n");
	
	int tam;
	char nome[40];
	char nome2[40];
	
	printf("\nDigite o primeiro nome: ");
	scanf("%s", &nome);
	tam = strlen(nome);
	fprintf(aula02,"%d%s", tam, nome);

	printf("\nDigite o segundo nome: ");
	scanf("%s", &nome2);
	tam = strlen(nome2);
	fprintf(aula02,"%d%s", tam, nome2);
	
	fclose(aula02);
	
	
	
	return 0;
}
