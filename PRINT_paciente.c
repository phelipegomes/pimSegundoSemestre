#include "cabecalho.h"
CAD_PES c[TOTAL_REGISTROS];

void PRINT_paciente()
{
	printf("\n");
	printf("\tCódigo ID......: %03d\n", c[i].codigo_id);
	printf("\tCódigo Unidade.: %02d\n", c[i].unidade_id);
	printf("\tUnidade........: %s\n", c[i].nome_unidade);
	printf("\tCliente Desde..: %02d/%02d/%4d\n", c[i].data_hora.dia1, c[i].data_hora.mes1, c[i].data_hora.ano1);
	printf("\tNome Cliente...: %s %s", c[i].nome_cliente, c[i].sobrenome);
	printf("\n___________________________________________\n\n\n");

	return;
}