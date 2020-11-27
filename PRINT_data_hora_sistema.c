#include "cabecalho.h"

int PRINT_data_hora_sistema()
{
	system("cls");
	struct tm* data_hora_atual;
	time_t segundos;
	time(&segundos);
	data_hora_atual = localtime(&segundos);

	printf("\n      Hora: %02d:%02d", data_hora_atual->tm_hour, data_hora_atual->tm_min);
	printf("   Data: %02d/%02d/%d", data_hora_atual->tm_mday, data_hora_atual->tm_mon + 1, data_hora_atual->tm_year + 1900);
	
	return;
}