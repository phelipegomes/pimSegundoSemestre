
// TELA PARA CONSULTAR UM PACIENTE

#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void CONSULTAR_paciente()
{
	int ok = 0;	
	FUNCAO_CAPTURA_parametro_PACIENTE();
	PRINT_fim_do_relatorio();
	return MENU_OPCAO_relatorio();
}