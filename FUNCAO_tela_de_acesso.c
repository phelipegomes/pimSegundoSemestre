#include "cabecalho.h"

void FUNCAO_tela_de_acesso()
{
	int Login_OK = 0;
	int NumTentativas = 0;
	char Controle_Login = 'S';

	do {
		PRINT_data_hora_sistema();
		PRINT_desenho_de_acesso();

		Login_OK = FUNCAO_CAPTURA_usuario_senha();

		if (Login_OK != 0)
		{
			PRINT_boas_vindas();
			MENU_OPCAO_principal();
			break;
		}
		else
		{
			PRINT_tente_novamente();
			continue;
		}
	} while (Login_OK == 0);
}