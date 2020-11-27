#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void PRINT_agendamento()
{
	printf("\n");
	printf("\tCódigo Agend...: %03d\n", age[i].codigo_id);
	printf("\tCódigo Unidade.: %02d\n", age[i].unidade_id);
	printf("\tUnidade........: %s\n", age[i].nome_unidade);
	printf("\tCliente........: %s %s\n", age[i].nome_cliente, age[i].sobrenome);
	printf("\tDoutor(a)......: %s\n", age[i].nome_medico);
	printf("\tCódigo Espec...: %02d\n", age[i].especialidade_id);
	printf("\tEspecialide....: %s\n", age[i].nome_especialidade);
	printf("\tData...........: %02d/%02d/%4d\n", age[i].data_hora.dia1, age[i].data_hora.mes1, age[i].data_hora.ano1);
	printf("\tHorário........: %02d:00\n\n", age[i].data_hora.hora);
	return;
}