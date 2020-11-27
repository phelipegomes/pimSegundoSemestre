#include "cabecalho.h"

void MENU_OPCAO_reclamacao_elogio()
{
	int opcao;
	system("cls");
	PRINT_data_hora_sistema();
	PRINT_MENU_OPCAO_reclamacao_elogio();
	scanf("%d", &opcao);
	setbuf(stdin, NULL);

	switch (opcao)
	{
	case 1:
		FUNCAO_CADASTRAR_reclamacao();
		break;
	case 2:
		CADASTRAR_elogio(); // arrumar leitura para gravacao
		break;
	case 3:
		MENU_OPCAO_principal();
		break;
	default:
		PRINT_comando_invalido();
		MENU_OPCAO_reclamacao_elogio();
		break;
	}
	return;
}