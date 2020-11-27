#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void PRINT_faturamento()
{
	printf("\tDescrição..........: %s\n", age[i].nome_especialidade);
	printf("\tNome Doutor(a).....: %s\n", age[i].nome_medico);
	printf("\tNome Paciente......: %s\n", age[i].nome_cliente);
	printf("\tValor da Consulta..: R$ %.2f\n", age[i].valor_monetario);
	printf("\n___________________________________________\n\n\n");

	return;
}