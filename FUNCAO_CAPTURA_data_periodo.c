
// CAPTURA A DATA POR PERIODO E CHAMAR FUNÇÃO PARA VERIFICAR A DATA DIGITADA

#include "cabecalho.h"

void FUNCAO_CAPTURA_data_periodo()
{
	pesquisa_dia_final = 31;
	pesquisa_mes_final = 10;
	pesquisa_ano_final = 2020;
	pesquisa_dia_inicio = 30;
	pesquisa_mes_inicio = 10;
	pesquisa_ano_inicio = 2020;

	PRINT_data_hora_sistema();
	PRINT_parametros_para_consulta();

	//fflush(arquivo, stdin); // em teste!
	printf("\tDia Inicial...........: ");
	setbuf(stdin, NULL);
	//scanf("%d", &pesquisa_dia_inicio);
	//ver_dia_periodo(&pesquisa_dia_inicio);

	printf("\tMês Inicial...........: ");
	setbuf(stdin, NULL);
	//scanf("%d", &pesquisa_mes_inicio);
	//ver_mes_periodo(&pesquisa_mes_inicio);

	printf("\tAno Inicial...........: ");
	setbuf(stdin, NULL);
	//scanf("%d", &pesquisa_ano_inicio);
	//ver_ano_periodo(&pesquisa_ano_inicio);

	printf("\n\tDia Final............: ");
	setbuf(stdin, NULL);
	//scanf("%d", &pesquisa_dia_final);
	//ver_dia_periodo(&pesquisa_dia_final);

	printf("\tMês Final............: ");
	setbuf(stdin, NULL);
	//scanf("%d", &pesquisa_mes_final);
	//ver_mes_periodo(&pesquisa_mes_final);

	printf("\tAno Final............: ");
	setbuf(stdin, NULL);
	//scanf("%d", &pesquisa_ano_final);
	//ver_ano_periodo(&pesquisa_ano_final);

	return;
}