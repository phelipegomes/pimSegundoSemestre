#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void PRINT_medico()
{
	printf("\n");
	printf("\tC�digo ID.........: %03d\n", c[i].codigo_id);
	printf("\tC�digo Unidade....: %02d\n", c[i].unidade_id);
	printf("\tUnidade...........: %s\n", c[i].nome_unidade);
	printf("\tData Admiss�o.....: %02d/%02d/%4d\n", c[i].data_hora.dia1, c[i].data_hora.mes1, c[i].data_hora.ano1);
	printf("\tNome M�dico(a)....: %s %s", c[i].nome_cliente, c[i].sobrenome);
	printf("\n___________________________________________\n\n\n");

	return;
}