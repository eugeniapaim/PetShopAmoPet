#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opcaoMenu;
	char nome[10][30];
	strcpy(strings[0], "Primeira string");
	strcpy(strings[1], "Segunda string");
	strcpy(strings[2], "Terceira string");
	
	do {
		printf("Ola, seja bem vindo a Pet Shop AmoPet!\n");
		printf("Escolha um de nossos servicos:\n");
		printf("1- Listar clientes\n");
		printf("2- Cadastra cliente pelo codigo\n");
		printf("3- Pesquisar cliente pelo nome\n");
		printf("4- Excluir cliente\n");
		printf("5- Listar pet\n");
		printf("6- Cadastrar Pet pelo codigo\n");
		printf("7- Pesquisar Pet pelo espécie\n");
		printf("8- Excluir Pet pelo código\n");
		printf("9- Cadastrar serviço pelo código;\n");
		printf("10- Atualizar serviço\n");
		printf("11-Excluir serviço pelo código;\n");
		printf("12- Listar serviços do pet\n");
		printf("13- Listar serviços do cliente\n");
		printf("14- Prestar serviço\n");
		printf("16- Lucro dos serviços\n");
		printf("0- Sair\n");
		scanf("%d", &opcaoMenu);
	} while (opcaoMenu!= 0);
	
	
	}
	
	switch (opcaoMenu){
		case 1:
			for (int i = 0; i < 3; i++) {
    			printf("%s\n", nome[i]);
			}
			
	}
	
	return 0;
}
