#include "cabecalho.h"

void FUNCAO_CAPTURA_codigo_id()
{
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_paciente();

	printf("\tC�digo ID.....: ");
	setbuf(stdin, NULL);
	scanf("%d", &pesquisa_codigo_id);
	//ver_dia(&pesquisa_codigo_id); sem uso

	return;
}