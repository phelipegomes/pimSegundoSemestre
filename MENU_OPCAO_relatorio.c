#include "cabecalho.h"

void MENU_OPCAO_relatorio()
{
	int opcao;
	PRINT_data_hora_sistema();
	PRINT_MENU_OPCAO_relatorio();
	scanf("%d", &opcao);
	setbuf(stdin, NULL);

	switch (opcao)
	{
	case 1:
		MENU_RELATORIO_consulta_agendadas(); // FUNCAO OK
		break;
	case 2:
		MENU_RELATORIO_FATURAMENTO_diario_unidade(); // FUN플O OK
		break;
	case 3:
		MENU_RELATORIO_FATURAMENTO_mensal_unidade(); // FUN플O OK
		break;
	case 4:
		MENU_RELATORIO_reclamacao_registradas(); // FUN플O OK
		break;
	case 5:
		MENU_RELATORIO_elogio_registrados(); // FUN플O OK
		break;
	case 6:
		CONSULTAR_paciente(); // FUN플O OK
		break;
	case 7:
		CONSULTAR_colaborador(); // FUN플O OK
		break;
	case 8:
		CONSULTAR_medico(); // FUN플O OK
		break;
	case 0:
		MENU_OPCAO_principal();
		break;
	default:
		PRINT_comando_invalido();
		MENU_OPCAO_relatorio();
		break;
	}
	return;
}