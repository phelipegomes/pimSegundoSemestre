#include "cabecalho.h"
REC_ELO r[TOTAL_REGISTROS];

void PRINT_reclamacao()
{
	printf("\tCódigo......: %03d\n", r[i].codigo_id);
	printf("\tData........: %02d/%02d/%04d\n", r[i].data_hora.dia1, r[i].data_hora.mes1, r[i].data_hora.ano1);
	printf("\tDoutor(a)...: %s\n", r[i].nome_medico);
	printf("\tPaciente....: %s\n\n", r[i].nome_cliente);
	printf("\t  *** Reclamação ***\n");
	printf(" %s", r[i].descricao);
	printf("\n___________________________________________\n\n\n\n");
}