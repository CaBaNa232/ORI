#include<stdio.h>
#include<string.h>



int main(){
	
	FILE *aula02;
	aula02 = fopen("teste.bin", "w");
	
	printf("Arquivo com variavel indicador de tamanho");
	printf("\nEscrevendo arquivo\n");
	
	char del =  '|';
	int tam;
	char bairro[40];
	char rua[40];
	
	printf("Digite o nome da rua: ");
	gets(rua);
	tam = strlen(rua);
	fprintf(aula02,"%d%c%s%c", tam, del, rua, del);

	printf("Digite o bairro: ");
	gets(bairro);
	
	tam = strlen(bairro);
	
	fprintf(aula02,"%d%c%s%c", tam, del, bairro, del);
	

	
	
	fclose(aula02);
	
	
	
	return 0;
}
