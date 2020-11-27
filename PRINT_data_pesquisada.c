// IMPRIME NA TELA AS DATAS PESQUISADAS

#include "cabecalho.h"

void PRINT_data_pesquisada()
{
	PRINT_data_hora_sistema();
	printf("\n\n");
	printf("   **************************************\n");
	printf("   *           Data Pesquisada          *\n");
	printf("   *             %02d/%02d/%04d             *\n", pesquisa_dia_inicio, pesquisa_mes_inicio, pesquisa_ano_inicio);
	printf("   **************************************\n");
	return;
}