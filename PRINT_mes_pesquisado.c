// IMPRIME M�S PESQUISADO - OK

#include "cabecalho.h"

void PRINT_mes_pesquisado()
{
	PRINT_data_hora_sistema();
	printf("\n\n");
	printf("   **************************************\n");
	printf("   *          M�s Pesquisado %02d         *\n", pesquisa_mes_inicio);
	printf("   **************************************\n\n");
	return;
}