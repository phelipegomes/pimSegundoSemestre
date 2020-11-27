#include "cabecalho.h"

void FUNCAO_CAPTURA_parametro_MEDICO()
{
	int opcao = 0;
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_medico();
	PRINT_OPCAO_parametro_consulta();
	scanf("%d", &opcao);
	switch (opcao)
	{
	case 1:
		FUNCAO_CONSULTA_MEDICO_nome();
		break;
	case 2:
		FUNCAO_CONSULTA_MEDICO_codigo_id();
		break;
	case 3:
		FUNCAO_CONSULTA_MEDICO_unidade();
		break;
	default:
		PRINT_comando_invalido();
		FUNCAO_CAPTURA_parametro_MEDICO();
		break;
	}
	return;
}