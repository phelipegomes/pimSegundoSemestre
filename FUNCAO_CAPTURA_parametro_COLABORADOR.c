#include "cabecalho.h"

void FUNCAO_CAPTURA_parametro_COLABORADOR()
{
	int opcao = 0;
	PRINT_data_hora_sistema();
	PRINT_MENU_CONSULTAR_colaborador();
	PRINT_OPCAO_parametro_consulta();
	scanf("%d", &opcao);
	switch (opcao)
	{
	case 1:
		FUNCAO_CONSULTA_COLABORADOR_nome();
		break;
	case 2:
		FUNCAO_CONSULTA_COLABORADOR_codigo_id();
		break;
	case 3:
		FUNCAO_CONSULTA_COLABORADOR_unidade();
		break;
	default:
		PRINT_comando_invalido();
		FUNCAO_CAPTURA_parametro_COLABORADOR();
		break;
	}
	return;
}