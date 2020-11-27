#include "cabecalho.h"

int PRINT_data_atual()
{
	struct tm* data_hora_atual;
	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);
	dia_sistema = data_hora_atual->tm_mday;
	mes_sistema = data_hora_atual->tm_mon + 1;
	ano_sistema = data_hora_atual->tm_year + 1900;

	return dia_sistema, mes_sistema, ano_sistema;
}