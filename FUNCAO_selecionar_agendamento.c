#include "cabecalho.h"

void FUNCAO_selecionar_agendamento()
{
	int opcao, k = 0;
	printf("\n\n\t");
	printf("Qual Agendamento?..: ");
	scanf("%d", &opcao);

	return FUNCAO_verificar_codigo_agendamento(&opcao);
}