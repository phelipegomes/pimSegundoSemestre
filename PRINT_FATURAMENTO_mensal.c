#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void PRINT_FATURAMENTO_mensal(float* valor_total_monetario, int* ok)
{
	printf("\tUnidade............: %s\n", age[i].nome_unidade);
	printf("\tTotal Agendamentos.: %02d\n", *ok);
	printf("\tFaturamento Mensal.: R$ %.2f\n", *valor_total_monetario);
	printf("\n___________________________________________\n\n\n");
	system("pause");
	return MENU_OPCAO_relatorio();
}