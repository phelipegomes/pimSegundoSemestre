#include "cabecalho.h"

void MENU_RELATORIO_reclamacao_registradas()
{
	FUNCAO_CAPTURA_data_periodo();
	PRINT_data_pesquisada_periodo();
	FUNCAO_busca_data_reclamacao();
}