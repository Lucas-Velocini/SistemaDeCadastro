#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int menu ();
void contagem_cadastro ();
void cliente ();

int i=0, maiorCadastro=0;

int main ()
{
	setlocale (LC_ALL, "Portuguese");
	int exc, alt, op, codigoMatriz[1000];
	char codigo [1000][100], nome [1000][100], CEP [1000][100], endereco [1000][100], bairro [1000][100], cidade [1000][100], estado [1000][100], telefone [1000][100], 
	email [1000][100], confirmar [10];
	
	op = menu();
	
	while (op!=5)
	{
		switch (op)
    {
    	case 1:
			i=maiorCadastro;
			i++;
			contagem_cadastro ();
    		codigoMatriz[i]=i;
			printf("---------Insira os dados---------\n");
			printf("Código do cliente: %d\n", codigoMatriz[i]);
    		printf("Nome: ");
    		fgets(nome[i], 100, stdin);
    		printf("CEP: ");
    		fgets(CEP[i], 100, stdin);
    		printf("Endereço: ");
    		fgets(endereco[i], 100, stdin);
    		printf("Bairro: ");
    		fgets(bairro[i], 100, stdin);
    		printf("Cidade: ");
    		fgets(cidade[i], 100, stdin);
    		printf("Estado: ");
    		fgets(estado[i], 100, stdin);
    		printf("Telefone: ");
    		fgets(telefone[i], 100, stdin);
    		printf("E-mail: ");
    		fgets(email[i], 100, stdin);
			break;
    	case 2:
			cliente ();
    		
    		if (codigoMatriz[i]!=0)
			{
				printf("Código do cliente: %d\n", codigoMatriz[i]);
    			printf("Nome: %s", nome[i]);
    			printf("CEP: %s", CEP[i]);
    			printf("Endereço: %s", endereco[i]);
    			printf("Bairro: %s", bairro[i]);
    			printf("Cidade: %s", cidade[i]);
    			printf("Estado: %s", estado[i]);
    			printf("Telefone: %s", telefone[i]);
    			printf("E-mail: %s", email[i]);
			}
			else
			{
				printf("Código de cliente inválido!");
			}
    		break;
    	case 3:
			cliente ();
    		
    		if (codigoMatriz[i]!=0)
			{
				printf("*-------O que deseja alterar-------*\n");
    			printf("|  1- Nome                         |\n");
    			printf("|  2- CEP                          |\n");
    			printf("|  3- Endereço                     |\n");
    			printf("|  4- Bairro                       |\n");
    			printf("|  5- Cidade                       |\n");
    			printf("|  6- Estado                       |\n");
    			printf("|  7- Telefone                     |\n");
    			printf("|  8- E-mail                       |\n");
    			printf("*-------====================-------*\n ");
    			printf("\nOpção: ");
				scanf("%d", &alt);
				fflush(stdin);
    		
    			switch (alt)
    			{
   					case 1:
						printf("Digite o novo nome: ");
   						fgets(nome[i], 100, stdin);
   						printf("Alteração concluida com sucesso!\n");
    					break;
   					case 2:
						printf("Digite o novo CEP: ");
   						fgets(CEP[i], 100, stdin);
   						printf("Alteração concluida com sucesso!\n");
    					break;
   					case 3:
						printf("Digite o novo endereço: ");
   						fgets(endereco[i], 100, stdin);
   						printf("Alteração concluida com sucesso!\n");
    					break;
   					case 4:
						printf("Digite o novo bairro: ");
   						fgets(bairro[i], 100, stdin);
   						printf("Alteração concluida com sucesso!\n");
    					break;
    				case 5:
						printf("Digite a nova cidade: ");
    					fgets(cidade[i], 100, stdin);
    					printf("Alteração concluida com sucesso!\n");
    					break;
    				case 6:
						printf("Digite o novo estado: ");
    					fgets(estado[i], 100, stdin);
    					printf("Alteração concluida com sucesso!\n");
						break;
    				case 7:
						printf("Digite o novo telefone: ");
    					fgets(telefone[i], 100, stdin);
    					printf("Alteração concluida com sucesso!\n");
						break;
    				case 8:
						printf("Digite o novo e-mail: ");
    					fgets(email[i], 100, stdin);
   		 				printf("Alteração concluida com sucesso!\n");
						break;
    				default:
    					printf("Opção inválida! Digite um número de 1 a 9.");	
				}
			}
			else
			{
				printf("Código de cliente inválido!");
			}
			break;
    	case 4:
			cliente ();
    		
    		if (codigoMatriz[i]!=0)
			{
				printf("*-------O que deseja excluir-------*\n");
    			printf("|  1- Cliente                      |\n");
    			printf("|  2- Nome                         |\n");
    			printf("|  3- CEP                          |\n");
    			printf("|  4- Endereço                     |\n");
    			printf("|  5- Bairro                       |\n");
    			printf("|  6- Cidade                       |\n");
    			printf("|  7- Estado                       |\n");
    			printf("|  8- Telefone                     |\n");
    			printf("|  9- E-mail                       |\n");
    			printf("*-------====================-------*\n ");
    			printf("\nOpção: ");
				scanf("%d", &exc);
    			fflush(stdin);
    		
    			switch (exc)
    			{
    				case 1:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(nome[i], "Sem registro\n");
							strcpy(CEP[i], "Sem registro\n");
							strcpy(endereco[i], "Sem registro\n");
							strcpy(bairro[i], "Sem registro\n");
							strcpy(cidade[i], "Sem registro\n");
							strcpy(estado[i], "Sem registro\n");
							strcpy(telefone[i], "Sem registro\n");
							strcpy(email[i], "Sem registro\n");
							printf("Dados do cliente excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
   					case 2:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(nome[i], "Sem registro\n"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
   					case 3:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(CEP[i], "Sem registro\n"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
   					case 4:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(endereco[i], "Sem registro\n"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
   					case 5:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(bairro[i], "Sem registro\n"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
	    			case 6:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(cidade[i], "Sem registro\n"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
    					break;
   		 			case 7:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(estado[i], "Sem registro\n"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
    				case 8:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(telefone[i], "Sem registro\n"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
    				case 9:
						printf("Digite *Confirmar* para excluir: ");
						fgets(confirmar, 10, stdin);
						if(strncmp (confirmar,"Confirmar",10) == 0 || strncmp (confirmar,"confirmar",10) == 0)
						{
							strcpy(email[i], "Sem registro\n"); 
							printf("Item excluido com sucesso!\n");
						}
						else
						{
							printf("Exclusão não confirmada, tente novamente.");
						}
						break;
    				default:
    					printf("Opção inválida! Digite um número de 1 a 9.");
				}
			}
			else
			{
				printf("Código de cliente inválido!");
			}
    		break;
    	default:
    		printf("Opção inválida! Digite um número de 1 a 5.");	
	}
	printf("\n\n");
	op = menu();
	}
	printf("=================================================================\n");
	printf("Obrigado por utilizar nosso sistema! Pressione enter para fechar.");
	printf("\n=================================================================");
}

int menu ()
{
	int op;
	printf ("*-----Selecione o que deseja-----*\n");
	printf ("|  1- Cadastrar                  |\n");
	printf ("|  2- Consultar                  |\n");
	printf ("|  3- Alterar                    |\n");
	printf ("|  4- Excluir                    |\n");
	printf ("|  5- Sair                       |\n");
	printf ("*-----======================-----*\n\n");
	printf ("Opção: ");
	scanf("%d", &op);
	fflush(stdin);
	system("cls");
	return(op);
}

void contagem_cadastro ()
{
	if(i>maiorCadastro)
	{
		maiorCadastro=i;
	}
}

void cliente ()
{
	printf("Digite o código do cliente: ");
    scanf("%d", &i);
    system("cls");
}
