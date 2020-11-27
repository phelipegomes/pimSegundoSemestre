#include "cabecalho.h"

void FUNCAO_CAPTURA_data_e_unidade()
{
	PRINT_data_hora_sistema();
	PRINT_parametros_para_consulta();

	printf("\tDia...........: ");
	setbuf(stdin, NULL);
	scanf("%d", &pesquisa_dia_inicio);
	//ver_dia(&pesquisa_dia_final);

	printf("\tMês...........: ");
	setbuf(stdin, NULL);
	scanf("%d", &pesquisa_mes_inicio);
	//ver_mes(&pesquisa_mes_final);

	printf("\tAno...........: ");
	setbuf(stdin, NULL);
	scanf("%d", &pesquisa_ano_inicio);
	//ver_ano(&pesquisa_ano_final);

	FUNCAO_CAPTURA_unidade();
	return;
}