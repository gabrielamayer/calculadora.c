#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float valorInv, visualizacoes, cliques, compartilhamentos, visualizacoesTotais, compartilhamentosTotais, cliquesTotais;
	int i;
	
	printf("Insira o valor que voc� deseja investir no an�ncio R$ "); 
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
    printf("\nInvestindo %.2f voc� obter� os seguintes retornos para este an�ncio\n", valorInv);
    printf("\nO an�ncio acumular� %.0f visualiza��es\n", visualizacoesTotais);
    printf("\nO total de cliques que o an�ncio receber� ser� de %.0f\n", cliquesTotais);
    printf("\nDestes cliques recebidos ir�o se originar %.0f compartilhamentos.\n", compartilhamentosTotais);
    
	return 0;    
    
}

