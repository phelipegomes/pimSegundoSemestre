#include "cabecalho.h"

void FUNCAO_arquivo_nao_encontrado()
{
	printf("\a\n\n");
	printf("   **************************************\n");
	printf("   *       Arquivo n�o Encontrado!      *\n");
	printf("   **************************************\n\n\n");
	system("pause");
	return MENU_OPCAO_principal();
}