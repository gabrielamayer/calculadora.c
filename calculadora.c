#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float valorInv, visualizacoes, cliques, compartilhamentos, visualizacoesTotais, compartilhamentosTotais, cliquesTotais;
	int i;
	
	printf("Insira o valor que você deseja investir no anúncio R$ "); 
	scanf("%f", &valorInv);
	
	visualizacoes = (valorInv * 30);
	cliques = (visualizacoes * 0.12);
	compartilhamentos = (cliques * 0.15);

	visualizacoesTotais = visualizacoes;
    compartilhamentosTotais = compartilhamentos;
    cliquesTotais = cliques;

	for (i = 0; i < 4; i++) {
        visualizacoes = compartilhamentos * 40;
        cliques = (visualizacoes * 0.12);
        compartilhamentos = (cliques * 0.15);

        compartilhamentosTotais += compartilhamentos;
        cliquesTotais += cliques;
		visualizacoesTotais += visualizacoes;       
    }
    printf("\nInvestindo %.2f você obterá os seguintes retornos para este anúncio\n", valorInv);
    printf("\nO anúncio acumulará %.0f visualizações\n", visualizacoesTotais);
    printf("\nO total de cliques que o anúncio receberá será de %.0f\n", cliquesTotais);
    printf("\nDestes cliques recebidos irão se originar %.0f compartilhamentos.\n", compartilhamentosTotais);
    
	return 0;    
    
}

