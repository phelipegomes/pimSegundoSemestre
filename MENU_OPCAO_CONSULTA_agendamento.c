#include "cabecalho.h"

void MENU_OPCAO_CONSULTA_agendamento()
{
	int opcao;
	PRINT_data_hora_sistema();
	PRINT_MENU_OPCAO_CONSULTA_agendamento();
	setbuf(stdin, NULL);
	scanf("%d", &opcao);

	switch (opcao)
	{
	case 1:
		FUNCAO_CONSULTA_agendamento_data();
		break;
	case 2:
		FUNCAO_CONSULTA_agendamento_unidade();
		break;
	case 3:
		FUNCAO_CONSULTA_agendamento_data_e_unidade();
		break;
	case 4:
		MENU_OPCAO_agendamento();
		break;
	default:
		PRINT_comando_invalido();
		MENU_OPCAO_CONSULTA_agendamento();
		break;
	}
	return;
}