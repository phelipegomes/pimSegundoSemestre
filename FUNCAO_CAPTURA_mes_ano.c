#include "cabecalho.h"

void FUNCAO_CAPTURA_mes_ano()
{
	PRINT_data_hora_sistema();
	PRINT_parametros_para_consulta();
	
	printf("\tMês............: ");
	setbuf(stdin, NULL);
	scanf("%d", &pesquisa_mes_inicio);
	//ver_mes(&pesquisa_mes);

	printf("\tAno............: ");
	setbuf(stdin, NULL);
	scanf("%d", &pesquisa_ano_inicio);
	//ver_mes(&pesquisa_mes);
	return;
}