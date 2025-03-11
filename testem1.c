#include <stdio.h>  //Biblioteca de comunica��o com o usuario
#include <stdlib.h> //Biblioteca de aloca��o de espa�o e memoria
#include <locale.h> //Biblioteca de aloca��es do texto por regi�o
#include <string.h> //Responsavel por cuidar dos strings

int registro()
{
	//inicio da cria��o de variaveis/strings
	char arquivo[80];
	char cpf[80];
	char nome[80];
	char sobrenome[80];
	char cargo[80];
	//fim da cria��o de variaveis/stings
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informa��es do usu�rio
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //responsavel por copiar os valores do string
	
	FILE *file;
	file = fopen(arquivo, "w"); //cria arquivo com "w" de writes
	fprintf(file, cpf);  //salvar a variavel
	fclose(file); //fechar o arquivo
	
	file = fopen (arquivo, "a"); //abre o arquivo com "a" para atualizar
	fprintf(file, ","); // solicita o uso de ,
	fclose(file); //fecha o arquivo
	
	printf ("Digite o nome a ser cadastrado: "); //coletando informa��es do usario
	scanf("%s", nome); //refere-se a string
	
	file = fopen (arquivo, "a"); //abre arquivo com "a"
	fprintf(file,nome); //salvar variavel
	fclose(file); //fecha arquivo
	
	file = fopen (arquivo, "a");//abre arquivo com "a"
	fprintf(file, ",");//salvar variavel
	fclose(file); //fechar arquivo
	
    printf ("Digite o sobrenome a ser cadastrado: "); //informa��o do usuario
	scanf("%s", sobrenome); //refere-se a string
	
	file = fopen(arquivo, "a"); //abre o arquivo com "a"
	fprintf(file, sobrenome); //salvar variavel
	fclose(file); //fecha o arquivo
	
	file = fopen (arquivo, "a"); //abre arquivo com "a"
	fprintf(file, ","); //salvar variavel
	fclose(file); //fecha o arquivo
	
	printf ("Digite o cargo a ser cadastrado: "); //informa��o do usu�rio
	scanf("%s",cargo); //refere-se a string
	
	file = fopen(arquivo, "a"); //abre arquivo com "a"
	fprintf(file, cargo); //salvar variavel
	fclose(file); //fechar arquivo
	
	system("pause");
	
	
}

int consulta()
{
	setlocale (LC_ALL,"Portuguese"); //definindo linguagem
	
	char cpf[80];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: "); //informa��o de cadastro do usu�rio
    scanf("%s", cpf); //refere-se a string
	
	FILE *file;
	file = fopen (cpf,"r"); //abrindo o arquivo com "r"
	
	if(file == NULL) //se a pesquisa n�o estiver no arquivo ele � igual a NULL
	{
		printf("N�o foi possivel abrir o aquivo, n�o localizado!\n"); //mensagem caso a busca seja invalida 
		
		
	}
	
	while(fgets(conteudo, 200, file) != NULL) //
	{
		printf("\nEssas s�o as informa��es do usuario: "); //inforam��es do usu�rio requerido
		printf("%s", conteudo); //%s refere-se a string
		printf("\n\n"); //pulando linhas

	}
	    system("pause");
	
	
}
int deletar() //op��o de deletar

{
	char cpf[80];
	{
		printf("Digite o CPF do usu�rio a ser deletado: "); //informa��o para a remo��o
		scanf("%s",cpf); //%s refere-se a string
	}
	
    remove(cpf);
    {
    	printf("Deletado com SUCESSO.\n\n"); //aviso de sucesso para o usu�rio
    	
	}
	
	FILE *file; 
	file = fopen(cpf,"r"); //abrir o arquivo com fun��o de ler/consultar o aqruivo cpf
	
	if(file == NULL)
	{
		printf("Usu�rio n�o encontrado!.\n\n"); //caso o usuario n�o tenho sido cadastrado
		system("pause");
	}


	
	
}




int main () 
{
	int opcao=0; //definindo variaves
	int x=1; 
	
	for(x=1;x=1;) //voltar para o menu
	{
		
		system ("cls"); //responsavel por limpar a tela


	setlocale (LC_ALL,"Portuguese"); //definindo linguagem
	
	
	printf ("### Cart�rio EBAC ###\n\n"); //inicio do menu
	printf ("Escolha a op��o desejada do menu:\n\n");
	printf ("\t1 - Registrar Nomes\n");
	printf ("\t2 - Consultar Nomes\n");
	printf ("\t3 - Deletar Nomes\n");
	printf ("\t4 - Sair do sistema\n\n");
	printf ("op��o: "); //fim do menu


	scanf("%d", &opcao); //comando de escolha do usuario
	
	system("cls");
	
	switch (opcao) //escolhendo as op�oes
{
	case 1: //chamada de fun��o
	registro(); 
	break;
		
	case 2:
	consulta();
	break;
		
	case 3:
	deletar();
	break;
	
	case 4:
	printf("Obrigado, Volte Sempre");
	return 0;
	break;
		
	default:
	printf("indisponivel\n\n");
	system("pause");
	break; //fim das escolhas de op��es
}
	
	
	
	
	
	
	
	
	

	
}
}
 
