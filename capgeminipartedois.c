#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
//definição de valores fixos
#define MES 12
#define DIA 30

//criação de uma estrutura para guardar as informações do anúncio
struct anuncio
{
	char nome[20];
	char cliente[30];
	float valorInv;
};

int main()
{	
	setlocale(LC_ALL, "Portuguese");
	system ("cls");
	
	struct anuncio ficha;
	int dia_ini, mes_ini, ano_ini, dia_fim, mes_fim, ano_fim, op, ano_tot, mes_tot, dia_tot, meses, dias, periodo, i;
	float valorInv, visualizacoes, cliques, compartilhamentos, visualizacoesTotais, compartilhamentosTotais, cliquesTotais;

	//criação do menu
	op = 0;
	while (op !=3)
	{
		printf("\n1 - Cadastrar o anúncio\n");
		printf("2 - Relatório de anúncio cadastrado\n");
		printf("3 - Sair\n");
		printf("\nDigite a opção desejada: ");
		scanf("%d", &op);
		fflush(stdin);

	//andamento de acordo com a opção escolhida pelo usuário		
	switch (op)
	{
		case 1:	//cadastra as informações do anúncio
			system("cls");
			printf("Digite o nome do anúncio: ");
			fgets(ficha.nome, 20, stdin);
			fflush(stdin);
			printf("Digite o nome do cliente: ");
			fgets(ficha.cliente, 30, stdin);
			fflush(stdin);
			printf("Digite o valor investido por dia R$ ");
			scanf("%f", &ficha.valorInv);
			fflush(stdin);	
			printf("Digite o dia em que o anúncio irá iniciar: ");
			scanf("%d", &dia_ini);
			fflush(stdin);
			printf("Digite o mês em que o anúncio irá iniciar: ");
			scanf("%d", &mes_ini);
			fflush(stdin);
			printf("Digite o ano em que o anúncio irá iniciar: ");
			scanf("%d", &ano_ini);
			fflush(stdin);
			printf("Digite o dia em que o anúncio irá finalizar: ");
			scanf("%d", &dia_fim);
			fflush(stdin);
			printf("Digite o mês em que o anúncio irá finalizar: ");
			scanf("%d", &mes_fim);
			fflush(stdin);
			printf("Digite o ano em que o anúncio irá finalizar: ");
			scanf("%d", &ano_fim);
			fflush(stdin);		
			break;
			
		case 2: //Retorna as informações do anúncio, juntamente com os cálculos de alcance
			system("cls");
			printf("\n------ RELATÓRIO DO ANÚNCIO CADASTRADO ------\n");
			printf("\nANÚNCIO: %s", ficha.nome);
			printf("\nCLIENTE: %s", ficha.cliente);
			printf("\nValor Investido por dia: %.2f\n", ficha.valorInv);
			
			//calculo dos dias em que o anúncio funcionará 
			ano_tot = (ano_fim - ano_ini);
			ano_tot = abs(ano_tot);
			mes_tot = (mes_fim - mes_ini);
			mes_tot = abs(mes_tot);
			dia_tot = (dia_fim - dia_ini);
			dia_tot = abs(dia_tot);
			
			//Anos e meses convertidos para dias
			meses = (ano_tot * MES);
			dias = (meses + mes_tot) * DIA;
			periodo = (dias + dia_tot);
			
			//calculadora de anúncio
			visualizacoes = (ficha.valorInv * 30);
			cliques = (visualizacoes * 0.12);
			compartilhamentos = (cliques * 0.15);

			visualizacoesTotais = visualizacoes;
			compartilhamentosTotais = compartilhamentos;
			cliquesTotais = cliques;

			for (i = 0; i < 4; i++) 
			{
        		visualizacoes = compartilhamentos * 40;
        		cliques = (visualizacoes * 0.12);
        		compartilhamentos = (cliques * 0.15);

        		compartilhamentosTotais += compartilhamentos;
        		cliquesTotais += cliques;
				visualizacoesTotais += visualizacoes;
            }
        
        	//impressão dos números que o anúncio alcançará
    		printf("\nInvestindo %.2f você obterá os seguintes retornos para este anúncio\n", (ficha.valorInv) * periodo);
    		printf("\nO anuncio acumulara %.0f visualizacoes\n", (visualizacoesTotais) * periodo);
    		printf("\nO total de cliques que o anuncio recebera sera de %.0f\n", (cliquesTotais) * periodo);
    		printf("\nDestes cliques recebidos irao se originar %.0f compartilhamentos.\n", (compartilhamentosTotais) * periodo);
    		printf("total de dias %d", periodo);
			break;
	}
	}
	return (0);
}
