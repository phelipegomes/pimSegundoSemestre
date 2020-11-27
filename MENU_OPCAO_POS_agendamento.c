#include "cabecalho.h"

void MENU_OPCAO_POS_agendamento()
{
	int opcao;
	PRINT_data_hora_sistema();
	PRINT_OPCAO_POS_agendamento();
	setbuf(stdin, NULL);
	scanf("%d", &opcao);

	switch (opcao)
	{
	case 1:
		CADASTRAR_agendamento();
		break;
	case 2:
		MENU_OPCAO_agendamento();
		break;
	case 3:
		MENU_OPCAO_principal();
		break;
	default:
		PRINT_comando_invalido();
		MENU_OPCAO_POS_agendamento();
		break;
	}
	return;
}