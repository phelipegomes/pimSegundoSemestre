
	// OPCAO PARA AGENDAMENTOS

#include "cabecalho.h"

void MENU_OPCAO_agendamento()
{
	int opcao;
	PRINT_data_hora_sistema();
	PRINT_MENU_OPCAO_agendamento();
	setbuf(stdin, NULL);
	scanf("%d", &opcao);

	switch (opcao)
	{
	case 1:
		CADASTRAR_agendamento();
		break;
	case 2:
		MENU_OPCAO_CONSULTA_agendamento();
		break;
	case 3:
		FUNCAO_CANCELAR_agendamento();
		break;
	case 4:
		MENU_OPCAO_principal();
		break;
	default:
		PRINT_comando_invalido();
		MENU_OPCAO_agendamento();
		break;
	}
	return;
}