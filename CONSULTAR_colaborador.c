
// TELA PARA CONSULTAR UM COLABORADOR

#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void CONSULTAR_colaborador()
{
	int ok = 0;
	FUNCAO_CAPTURA_parametro_COLABORADOR();
	PRINT_fim_do_relatorio();
	return MENU_OPCAO_relatorio();
}