#include "cabecalho.h"
agendar age[TOTAL_REGISTROS];

void CADASTRAR_agendamento()
{
	PRINT_data_hora_sistema();
	PRINT_MENU_novo_agendamento();

	ABRIR_ESCRITA_agendamento();
	while (!feof(arquivo))
	{
		LER_ARQUIVO_agendamento();
	}
	ESCREVER_ARQUIVO_agendamento();

	fclose(arquivo);
	PRINT_dados_gravados();
	return MENU_OPCAO_POS_agendamento();
}