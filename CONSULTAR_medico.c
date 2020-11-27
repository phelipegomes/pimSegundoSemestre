
	// TELA PARA CONSULTAR UM MÉDICO(A)

#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void CONSULTAR_medico()
{
	int ok = 0;
	FUNCAO_CAPTURA_parametro_MEDICO();
	PRINT_fim_do_relatorio();
	return MENU_OPCAO_relatorio();
}