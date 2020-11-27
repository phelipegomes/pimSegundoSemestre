#include "cabecalho.h"

void PRINT_data_pesquisada_periodo()
{
	PRINT_data_hora_sistema();
	printf("\n\n");
	printf("   **************************************\n");
	printf("   *           Data Pesquisada          *\n");
	printf("   *      %02d/%02d/%d até %02d/%02d/%d     *\n", pesquisa_dia_inicio, pesquisa_mes_inicio, pesquisa_ano_inicio, pesquisa_dia_final, pesquisa_mes_final, pesquisa_ano_final);
	printf("   **************************************\n");

	if ((pesquisa_dia_inicio, pesquisa_mes_inicio, pesquisa_ano_inicio) > (pesquisa_dia_final, pesquisa_mes_final, pesquisa_ano_final))
	{
		printf("   **************************************\n");
		printf("   *         Período incorreto!         *\n");
		printf("   *          Tente novamente.          *\n");
		printf("   **************************************\n");
		printf("\a");
		system("pause");
		FUNCAO_CAPTURA_data_periodo();
	}
	return 0;
}