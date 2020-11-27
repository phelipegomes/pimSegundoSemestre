#include "cabecalho.h"

void MENU_RELATORIO_consulta_agendadas()
{
	FUNCAO_CAPTURA_data_e_unidade();
	PRINT_data_e_unidade_pesquisada();
	FUNCAO_busca_mes_agendamento();
}