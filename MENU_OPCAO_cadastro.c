#include "cabecalho.h"

void MENU_OPCAO_cadastro()
{
	int opcao;
	PRINT_data_hora_sistema();
	PRINT_MENU_OPCAO_cadastro();
	setbuf(stdin, NULL);
	scanf("%d", &opcao);

	switch (opcao)
	{
	case 1:
		CADASTRAR_paciente(); // FUNÇÃO OK
		break;
	case 2:
		CADASTRAR_colaborador(); // FUNÇÃO OK
		break;
	case 3:
		CADASTRAR_medico(); // FUNÇÃO OK
		break;
	case 4:
		MENU_OPCAO_principal();
		break;
	default:
		PRINT_comando_invalido();
		MENU_OPCAO_cadastro();
		break;
	}
	return;
}