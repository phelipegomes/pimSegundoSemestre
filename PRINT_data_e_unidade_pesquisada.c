// IMPRIME NA TELA AS DATAS PESQUISADAS

#include "cabecalho.h"

void PRINT_data_e_unidade_pesquisada()
{
	PRINT_data_hora_sistema();
	printf("\n\n");
	printf("   **************************************\n");
	printf("   *       Paramêtros de Pesquisa       *\n");
	printf("   *       Unidade....: %03d             *\n", pesquisa_codigo_id);
	printf("   *       Data.......: %02d/%02d/%04d      *\n", pesquisa_dia_inicio, pesquisa_mes_inicio, pesquisa_ano_inicio);
	printf("   **************************************\n");
	return;
}