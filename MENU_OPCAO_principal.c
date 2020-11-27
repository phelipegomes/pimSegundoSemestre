
	// MENU PRINCIPAL

#include "cabecalho.h"

void MENU_OPCAO_principal()
{
	int opcao;
	PRINT_data_hora_sistema();
	PRINT_MENU_OPCAO_principal();
	setbuf(stdin, NULL);
	scanf("%d", &opcao);

	switch (opcao)
	{
	case 1:
		MENU_OPCAO_agendamento();
		break;
	case 2:
		MENU_OPCAO_cadastro();
		break;
	case 3:
		MENU_OPCAO_relatorio();
		break;
	case 4:
		MENU_OPCAO_reclamacao_elogio();
		break;
	case 5:
		PRINT_desconectado_com_sucesso();
		FUNCAO_tela_de_acesso();
		break;
	case 0:
		PRINT_encerrando_aplicacao();
		exit(1);
		break;
	default:
		PRINT_comando_invalido();
		MENU_OPCAO_principal();
		break;
	}
	return;
}