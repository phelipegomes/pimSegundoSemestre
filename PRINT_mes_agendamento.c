#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void PRINT_mes_agendamento()
{
	printf("\tCódigo........: %03d\n", age[i].codigo_id);
	printf("\tData..........: %02d/%02d/%04d\n", age[i].data_hora.dia1, age[i].data_hora.mes1, age[i].data_hora.ano1);
	printf("\tHorário.......: %02d\n", age[i].data_hora.hora);
	printf("\tPaciente......: %s\n", age[i].nome_cliente);
	printf("\tDoutor(a).....: %s\n", age[i].nome_medico);
	printf("\tEspecialidade.: %s\n", age[i].nome_especialidade);
	printf("\n___________________________________________\n\n\n\n");
}